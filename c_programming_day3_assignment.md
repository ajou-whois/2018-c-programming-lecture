# WhoIs C Programming Assignment - Day3

### Q1

* 보고서에 작성하시오

#### 문제

2차원 배열을 인자로 받는 함수의 인자를 정의할 때, 배열의 세로 길이는 주어지지 않아도 되지만, 가로 길이는 반드시 주어져야 한다. 왜 가로 길이는 반드시 주어져야 하는가?

### Q2

* 코드 저장 경로 : ~/day3/q2.c

#### 문제

Brainfuck은 아래의 8개의 명령어만을 가지는 튜링 완전한 프로그래밍 언어이다. Brainfuck 언어로 작성된 프로그램을 입력받아 실행하는 인터프리터를 구현하시오.

##### 기타 조건
* 길이가 10240인 `char`형 배열을 선언하여 프로그램을 입력받으시오.
* 길이가 1024인 `unsigned char`형 배열을 선언하여 메모리로 사용하시오.
* 포인터 변수 `ptr`을 선언하여 메모리를 가리키는 포인터로 사용하시오.
* 프로그램은 줄바꿈 또는 띄어쓰기 없이 한 줄로 입력된다.
* `[`와 `]` 명령어는 중첩되지 않고 사용된다.
* 오류가 발생할 수 있는 상황을 모두 찾아 적절히 예외처리하시오.
	* 단 실행되지 않는 프로그램이 입력되는 경우는 없다.

##### Brainfuck 명령어
`>` : 포인터를 1 증가시킨다.
`<` : 포인터를 1 감소시킨다.
`+` : 포인터가 가리키는 바이트의 값을 증가시킨다.
`-` : 포인터가 가리키는 바이트의 값을 감소시킨다.
`.` : 포인터가 가리키는 바이트에 저장된 값을 아스키 문자로 출력한다. 예를 들어 `0x41`이 저장되어 있다면 `A`를 출력한다.
`,` : 사용자로부터 입력을 받아 포인터가 가리키는 바이트에 입력한 문자의 아스키 코드 값을 저장한다. 예를 들어 `A`를 입력하면 `0x41`을 저장한다.
`[` : 포인터가 가리키는 바이트의 값이 0이면 `]`가 있는 곳으로 건너뛴다.
`]` : 포인터가 가리키는 바이트의 값이 0이 아니면 `[`가 있는 곳으로 건너뛴다.

#### 예제

##### 입력1

```text
++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.
```

##### 출력1

```text
Hello, World!
```

### Q3

* 코드 저장 경로 : ~/day3/q3.c

#### 문제

길이가 64인 `int`형 배열 `queue`을 선언하고, 큐의 맨 앞 인덱스를 가리키는 변수 `front`와 맨 뒤 인덱스를 가리키는 변수 `reer`를 선언한다. 이를 이용하여 큐 프로그램을 만드시오. 2일차 강의노트의 Queue Abstract Data Type을 참고하시오. 프로그램은 다음과 같은 기능을 갖는다.

1. enqueue : 큐의 맨 뒤에 값을 추가한다.
2. dequeue : 큐의 맨 앞에 있는 값을 출력하고 삭제한다.
3. peek : 큐의 맨 앞 원소(다음에 dequeue할 경우 나올 원소)의 값을 출력한다.
4. show : 현재 큐에 저장된 모든 데이터를 띄어쓰기로 구분하여 한 줄로 출력한다.
5. quit : 프로그램을 종료한다.

##### 조건

* 오류가 발생할 수 있는 상황을 모두 찾아 적절한 메세지를 출력하시오.
	* 예를 들어 큐에 아무 데이터도 없는데 dequeue를 시도한다면 오류가 발생할 수 있다.

#### 예제

예제에서는 큐의 최대 길이가 8이라고 가정한다.

```text
[Menu]
1. enqueue
2. dequeue
3. peek
4. show
5. quit

Input: 
```

초기화된 배열의 상태는 다음과 같을 것이고, 큐에 아무 데이터도 없으므로 `front`와 `reer`의 값은 0일 것이다.

```text
[stack]
index		value
stack[0]	0
stack[1]	0
stack[2]	0
stack[3]	0
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[front]
0

[reer]
0
```

만약 값 3개(10, 20, 30)를 enqueue하면 `queue`는 다음과 같이 변화할 것이고, `reer`의 값은 `3`이 될 것이다.

```text
Input: 1
Value: 10
Enqueue 10

Input: 1
Value: 20
Enqueue 20

Input: 1
Value: 30
Enqueue 30

Input:
```

```text
[stack]
index		value
stack[0]	10
stack[1]	20
stack[2]	30
stack[3]	0
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[front]
0

[reer]
3
```

이 상태에서 show하면 다음과 같이 출력한다.

```text
Input: 4
Elements: 10 20 30
```

이 상태에서 peek 하면 다음과 같이 출력한다.

```text
Input: 3
Peek 10
```

스택의 값을 dequeue하면 현재 가장 위에 있는 값을 출력하고 삭제한다. 한 번 dequeue을 하면 `queue`는 다음과 같이 변화할 것이고, `front`의 값은 `1`이 될 것이다.

```text
Input: 2
Dequeue 10

Input:
```

```text
[stack]
index		value
stack[0]	10
stack[1]	20
stack[2]	30
stack[3]	0
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[front]
1

[reer]
3
```

```text
Input: 2
Dequeue 20

Input:
```

```text
[stack]
index		value
stack[0]	10
stack[1]	20
stack[2]	30
stack[3]	0
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[front]
2

[reer]
3
```

이 상태에서 show하면 다음과 같이 출력한다.

```text
Input: 4
Elements: 30
```

여기에서 다시 enqueue를 하면 다음과 같을 것이다.

```text
Input: 1
Value: 40
Enqueue 40

Menu :
```

```text
[stack]
index		value
stack[0]	10
stack[1]	20
stack[2]	30
stack[3]	40
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[front]
2

[reer]
4
```

이 상태에서 show하면 다음과 같이 출력한다.

```text
Input: 4
Elements: 30 40
```

이 상태에서 peek 하면 다음과 같이 출력한다.

```text
Input: 3
Peek 30
```