# 시스템 프로그래밍 과제 

이 문서는 시스템 프로그래밍 과목의 과제 내용을 정리한 것입니다. 과제는 Lab1부터 Lab4까지로 나누어져 있으며, 각 Lab의 목표 및 수행 내용을 기술하고 있습니다.

## 목차

- [Lab 1](#lab-1)
- [Lab 2](#lab-2)
- [Lab 3](#lab-3)
- [Lab 4](#lab-4)

---

## Lab 1

### 목표
Shell 프로그래밍 기초를 이해하고 간단한 스크립트를 작성한다.

### 내용
1. **"test" 명령 사용**: 현재 디렉토리에서 일반 파일만 출력하는 쉘 프로그램 작성.
   - **파일명**: `lab1/exam1.sh`
   - **명령어**: `if [ -f "$item" ]; then`

2. **구구단 출력**: 반복문(while, for, until)을 사용하여 구구단을 표시하는 쉘 스크립트 작성.
   - **파일명**: `lab1/exam2.sh`
   - **명령어**: `for i in {1..9}; do ... done`

3. **피보나치 수열**: "let" 또는 "expr" 명령을 사용하여 피보나치 수열을 나타내는 쉘 스크립트 작성.
   - **파일명**: `lab1/exam3.sh`
   - **명령어**: `let` or `expr`

4. **최대/최소 수 찾기**: 사용자로부터 3개의 숫자를 입력받아 그 중 가장 큰 수와 작은 수를 출력하는 쉘 스크립트 작성.
   - **파일명**: `lab1/examr4.sh`
   - **명령어**: `-gt`와 `-lt`

5. **문장 검색**: Here 자료를 이용하여 문장 내에 "korea"를 검색하는 쉘 스크립트 작성.
   - **파일명**: `lab1/exam5.sh`
   - **명령어**: `grep`

6. **문자 표시**: 특정 문자를 표시하는 쉘 스크립트 작성.
   - **파일명**: `lab1/exam6.sh`
   - **명령어**: `echo`

---

## Lab 2

### 목표
C 프로그래밍에서 라이브러리 및 메모리 관리, 디버깅 기법을 학습한다.

### 내용
1. **사칙연산 함수 작성**: 덧셈, 뺄셈, 곱셈, 나눗셈 함수 및 예제 프로그램 작성. 정적, 공유, 동적 라이브러리 방식으로 결과 실행.
   - **파일명**: `lab2/exam01`

2. **Makefile 작성**: C 소스 파일을 목적 파일로 만들고, 라이브러리 또는 실행 파일 생성하는 Makefile 작성.
   - **파일명**: `lab2/exam02`

3. **GIT 사용법 정리**: Git과 GitHub 계정 생성 후 모든 과제를 lab2 프로젝트에 업로드.

4. **GDB 및 VSCode 사용법 정리**: GDB 및 VSCode에서의 디버깅 방법 정리 및 실습 결과 포함.
   - **파일명**: `lab2/exam0.md`

5. **perror() 함수 구현**: 라이브러리 함수인 perror()와 동일하게 동작하는 my_perror() 함수 구현.
   - **파일명**: `my_perror.c`

6. **assert() 함수 구현**: assert() 함수와 동일하게 동작하는 my_assert() 함수 구현.
   - **파일명**: `my_assert.c`

7. **gprof와 Valgrind 적용**: gprof 프로파일링과 Valgrind 메모리 누수 디버깅을 적용.
   - **파일명**: `profiling_results.md`

8. **행렬 덧셈 프로그램**: 두 행렬의 크기를 입력받아 동적으로 메모리 할당 후 덧셈.
   - **파일명**: `matrix_addition.c`

9. **C++ STL 및 Rust 구현**: C++ STL의 vector와 Rust의 Vec<T> 자료형을 활용하여 행렬 덧셈 구현.
   - **파일명**: `matrix_addition_cpp.cpp`, `matrix_addition_rust.rs`

10. **학생 정보 구조체**: 학생 수, 이름, 중간 및 기말 점수를 기록하는 구조체 및 트리 구조체 탐색 프로그램 작성.
    - **파일명**: `student_tree.c`

11. **C++ STL 및 Rust의 map 구현**: C++ STL의 map 및 Rust의 BTreeMap을 활용하여 학생 정보 프로그램 구현.
    - **파일명**: `student_map_cpp.cpp`, `student_map_rust.rs`

---

## Lab 3

### 목표
파일 및 디렉토리 작업, 프로세스 및 IPC(Inter-Process Communication)에 대한 이해를 높인다.

### 내용
1. **GitHub 저장소 생성**: lab3 프로젝트 생성 후 모든 과제 프로그램 업로드.
   - **파일명**: `git_repository.md`

2. **파일 및 디렉토리 함수 사용**: 파일 및 디렉토리 관련 함수들을 사용하여 프로그램 작성.
   - **파일명**: `file_directory_operations.c`

3. **디렉토리 탐색 프로그램**: 주어진 디렉토리 내의 파일 및 디렉토리를 나열하는 프로그램 작성 (ls -R과 동일).
   - **파일명**: `list_directories.c`

4. **타자 연습 프로그램**: 몇 개의 문장을 타자하고 잘못 타이핑한 횟수 및 평균 분당 타자수 측정.
   - **파일명**: `typing_practice.c`

5. **프로세스 관련 함수 사용**: 프로세스 관련 함수들을 사용하여 프로그램 작성.
   - **파일명**: `process_operations.c`

6. **system 함수 구현**: 직접 구현한 함수로 쉘 명령을 실행하도록 하는 프로그램 작성.
   - **파일명**: `my_system.c`

7. **시그널 함수 사용**: 시그널과 관련된 함수들을 사용하여 프로그램 작성.
   - **파일명**: `signal_operations.c`

8. **프로세스 간 통신**: IPC 함수들을 사용하여 프로그램 작성.
   - **파일명**: `ipc_operations.c`

9. **메시지 큐**: 텍스트 기반 간단한 채팅 프로그램 구현.
   - **파일명**: `chat_program.c`

10. **공유 메모리**: 파일 복사 프로그램 작성 (부모와 자식 프로세스 동기화).
    - **파일명**: `file_copy.c`

---

## Lab 4

### 목표
쓰레드, 소켓 및 GUI 관련 프로그래밍을 통해 고급 시스템 프로그래밍 기법을 학습한다.

### 내용
1. **GitHub 저장소 생성**: lab4 프로젝트 생성 후 모든 과제 프로그램 업로드.
   - **파일명**: `git_repository.md`

2. **쓰레드 함수 사용**: 쓰레드 관련 함수들을 사용하여 프로그램 작성.
   - **파일명**: `thread_operations.c`

3. **생산자 소비자 문제**: 쓰레드를 사용하여 제한 버퍼 구현.
   - **파일명**: `bounded_buffer.c`

4. **메시지 방송 프로그램**: 클라이언트 쓰레드로부터 메시지 요청을 받고 방송하는 서버 쓰레드 프로그램.
   - **파일명**: `broadcast_server.c`

5. **소켓 프로그래밍**: 소켓을 이용한 프로그램 작성.
   - **파일명**: `socket_example.c`

6. **다중 클라이언트 채팅 프로그램**: 멀티프로세스/쓰레드, select 또는 epoll 사용하여 채팅 프로그램 구현.
   - **파일명**: `multi_client_chat.c`

7. **간단한 웹서버 구현**: TCP 소켓을 이용하여 HTTP GET/POST 메소드 및 CGI 프로그램 실행 구현.
   - **파일명**: `simple_web_server.c`

8. **GUI 함수 사용**: GUI 관련 함수들을 사용하여 프로그램 작성.
   - **파일명**: `gui_example.c`

9. **GTK+ 또는 Qt 계산기 프로그램**: 간단한 계산기 프로그램 작성.
   - **파일명**: `calculator_gtk.c` 또는 `calculator_qt.cpp`

---

이 README 파일은 시스템 프로그래밍 과목의 과제를 쉽게 이해하고 실행할 수 있도록 돕기 위해 작성되었습니다. 각 Lab의 목표와 요구 사항을 충실히 이행하였으며, 제공된 파일명에 따라 관련 코드를 확인하실 수 있습니다.
