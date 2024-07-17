#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t client_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
pthread_cond_t recv_cond = PTHREAD_COND_INITIALIZER;

#define MAX_CLIENT 5// 클라이언트의 수

int message = 0;
int server_message = 0;
int server_created = 0;
int client_created = 0;
int count = 0;

void *recv_thread(void *arg) {
    int tid = *((int*)arg);
    while (1) {
        pthread_mutex_lock(&client_mutex);
        pthread_cond_wait(&recv_cond, &client_mutex);
        printf("%d: 서버가 전달한 메시지: %d\n", tid, server_message);
        pthread_mutex_unlock(&client_mutex);
    }
    return NULL;
}

void *client_thread(void *arg) {
    pthread_t tid = pthread_self();
    pthread_t recv_p;
    
    pthread_create(&recv_p, NULL, recv_thread, (void*)tid);

    pthread_mutex_lock(&mutex);
    client_created++;
    while (!server_created) {
        pthread_cond_wait(&cond, &mutex);
    }
    pthread_mutex_unlock(&mutex);

    pthread_mutex_lock(&mutex);
    message = (int)tid;
    printf("%d: 메시지 요청 %d\n", (int)tid, message);
    count++;
    pthread_cond_signal(&cond);
    pthread_mutex_unlock(&mutex);

    // 클라이언트 쓰레드가 서버의 방송을 받기 전까지 대기
    while(1){
        if(count == MAX_CLIENT){
            break;
        }
        else{
            sleep(1);
        }
    }
    pthread_cancel(recv_p);

    return NULL;
}

void *server_thread(void *arg) {
    pthread_mutex_lock(&mutex);
    server_created = 1;
    pthread_cond_broadcast(&cond); // 모든 클라이언트에게 서버 생성 신호 전송
    pthread_mutex_unlock(&mutex);

    while (1) {
        pthread_mutex_lock(&mutex);
        while (message == 0) {
            pthread_cond_wait(&cond, &mutex);
        }
        printf("서버: 값 방송 요청받음.. %d\n", message);
        pthread_mutex_lock(&client_mutex);
        server_message = message;
        pthread_mutex_unlock(&client_mutex);
        pthread_cond_broadcast(&recv_cond); // 모든 클라이언트에게 방송
        sleep(1);
        message = 0;
        pthread_mutex_unlock(&mutex);
    }

    return NULL;
}

int main() {
    pthread_t server_tid;
    pthread_t client_tid[5];

    for (int i = 0; i < MAX_CLIENT; i++) {
        pthread_create(&client_tid[i], NULL, client_thread, NULL);
    }
    // 클라이언트가 모두 생성되기를 기다림
    while(1){
        if (client_created == MAX_CLIENT){
            break;
        }else{
            sleep(1);
        }
    }
    pthread_create(&server_tid, NULL, server_thread, NULL);

    for (int i = 0; i < MAX_CLIENT; i++) {
        pthread_join(client_tid[i], NULL);
    }

    // 서버 스레드 종료
    pthread_cancel(server_tid);
    pthread_join(server_tid, NULL);

    return 0;
}
