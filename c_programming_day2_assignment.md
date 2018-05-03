# WhoIs C Programming Assignment - Day2

### Q1

* 보고서에 작성하시오.

#### 문제

Automatic Variable, Global Variable, Extern Variable, Static Variable, Register Variable, Volatile Variable에 각각 설명하시오.

### Q2

* 보고서에 작성하시오.

#### 문제

배열의 크기와 배열의 길이의 차이점에 대해 설명하시오.

### Q3

* 보고서에 작성하시오.

#### 문제

포인터에 대해 아는대로 모두 설명하시오.

### Q4

* 보고서에 작성하시오.

#### 문제

Call by Value와 Call by Reference에 대해 설명하시오.

### Q5

* 코드 저장 경로 : ~/day2/q5.c

#### 문제

사용자로부터 두 정수 값을 입력받아 곱한 값을 출력하는 프로그램을 만드시오. 입력값은 한 줄에 두 개의 값이 띄어쓰기로 구분되어 입력된다.

##### 조건

* 두 실수를 인자로 받아 곱한 값을 반환하는 **함수를 정의하여** 문제를 해결해야 한다.
	* 함수의 prototype은 `int multiply(int, int);`로 한다.

#### 예제

##### 입력1

```text
3 8
```

##### 출력1

```text
24
```

##### 입력2

```text
5 4
```

##### 출력2

```text
20
```

### Q6

* 코드 저장 경로 : ~/day2/q6.c

#### 문제

사용자로부터 정수 n을 입력받아 피보나치 수열의 n번째 항을 계산하는 프로그램을 만드시오. 피보나치 수열은 점화식 ![eq](https://latex.codecogs.com/png.latex?%5Cinline%20%5Cdpi%7B100%7D%20a_%7Bn&plus;2%7D%20%3D%20a_%7Bn&plus;1%7D%20&plus;%20a_%7Bn%7D%20%28n%20%5Cin%20%5Cmathbb%7BN%7D%2C%20a_%7B1%7D%20%3D%20a_%7B2%7D%20%3D%201%29) 을 만족하는 수열로 각 항의 값은 `1, 1, 2, 3, 5, 8, ...` 이다.

##### 조건

* 정수 값 n을 입력받아 피보나치 수열의 n번째 항을 **재귀적으로** 계산하는 **함수를 정의하여** 문제를 해결해야 한다.
	* 함수의 prototype은 `int fibonacci(int);`로 한다.

#### 예제

##### 입력1

```text
5
```

##### 출력1

```text
5
```

##### 입력2

```text
8
```

##### 출력2

```text
21
```


### Q7

* 코드 저장 경로 : ~/day2/q7.c

#### 문제

길이가 1024인 두 개의 `char`형 배열을 선언하시오. 한 배열에 사용자로부터 문자열을 입력받고, 배열의 내용을 다른 배열로 복사한 뒤, 두 배열에 저장된 값을 각각 출력하는 프로그램을 만드시오.

##### 조건

* `stdio.h` 헤더파일만을 사용해야 한다.
	* `strcpy()`, `strncpy()`, `memcpy()` 등 복사 함수를 사용하지 말고 직접 복사하도록 구현해야 한다.

#### 예제

##### 입력1

```text
hello, world!
```

##### 출력1

```text
array 1 : hello, world!
array 2 : hello, world!
```

##### 입력2

```text
array
```

##### 출력2

```text
array 1 : array
array 2 : array
```

### Q8

* 코드 저장 경로 : ~/day2/q8.c

#### 문제

길이가 32인 `int`형 배열 `stack`을 선언하고, 스택의 맨 위 인덱스를 가리키는 변수 `top`을 선언한다. 이를 이용하여 스택 프로그램을 만드시오. 강의노트의 Stack Abstract Data Type을 참고하시오. 프로그램은 다음과 같은 기능을 갖는다.

1. push : 스택의 맨 위에 값 추가한다.
2. pop : 스택의 맨 위에 있는 값을 출력하고 삭제한다.
3. peek : 현재 top 변수의 값과 스택의 맨 위 원소의 값을 출력한다.
4. show : 현재 스택에 저장된 모든 데이터를 띄어쓰기로 구분하여 한 줄로 출력한다.
5. quit : 프로그램을 종료한다.

##### 조건

* 오류가 발생할 수 있는 상황을 모두 찾아 적절한 메세지를 출력하시오.
	* 예를 들어 스택에 아무 데이터도 없는데 pop을 시도한다면 오류가 발생할 수 있다.

#### 예제

예제에서는 스택의 최대 길이가 8이라고 가정한다.

```text
[Menu]
1. push
2. pop
3. peek
4. show
5. quit

Input: 
```

초기화된 배열의 상태는 다음과 같을 것이고, 스택에 아무 데이터도 없으므로 `top`의 값은 0일 것이다.

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

[top]
0
```

만약 값 3개(10, 20, 30)를 push하면 `stack`은 다음과 같이 변화할 것이고, `top`의 값은 `3`가 될 것이다.

```text
Input: 1
Value: 10
Push 10

Input: 1
Value: 20
Push 20

Input: 1
Value: 30
Push 30

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

[top]
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
Peek 30
```

스택의 값을 pop하면 현재 가장 위에 있는 값을 출력하고 삭제한다. 한 번 pop을 하면 `stack`은 다음과 같이 변화할 것이고, `top`의 값은 `2`가 될 것이다.

```text
Input: 2
Pop 30

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

[top]
2
```

```text
Input: 2
Pop 20

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

[top]
1
```

이 상태에서 show하면 다음과 같이 출력한다.

```text
Input: 4
Elements: 10
```

여기에서 다시 push를 하면 데이터가 덮어씌워질 것이다.

```text
Input: 1
Value: 40
Insert 40

Menu :
```

```text
[stack]
index		value
stack[0]	10
stack[1]	40
stack[2]	30
stack[3]	0
stack[4]	0
stack[5]	0
stack[6]	0
stack[7]	0

[top]
2
```

이 상태에서 show하면 다음과 같이 출력한다.

```text
Input: 4
Elements: 10 40
```

이 상태에서 peek 하면 다음과 같이 출력한다.

```text
Input: 3
Peek 40
```

### Q9

* 코드 저장 경로 : ~/day2/q9.c

#### 문제

괄호(`'('`, `')'`)로만 구성된 문자열을 입력받아 괄호의 쌍이 맞는지 판별하는 프로그램을 구현하시오. 괄호 문자열을 길이가 1024인 `char`형 배열에 입력받고, 쌍이 맞다면 문자열이라면 `True`, 아니라면 `False`를 출력하시오.

##### 조건

* 반드시 스택을 사용하여 문제를 해결해야 한다.

#### 예제

##### 입력 1

```text
((((((()))(())()))))
```

##### 출력 1

```text
True
```

##### 입력 2

```text
(((((()))(())()))))((()((((()))
```

##### 출력 2

```text
False
```

### Q10

* 코드 저장 경로 : ~/day2/q10.c

#### 문제

사용자로부터 `int`형 정수 두 개를 입력받아 각각 변수에 저장하고, 두 변수에 저장된 값을 서로 바꿔 출력하는 프로그램을 만드시오.

##### 조건

* 두 변수의 값을 바꾸는 **함수를 정의하여** 문제를 해결해야 한다.

#### 예제

##### 입력1

```text
2 7
```

##### 출력1

```text
before
a : 2
b : 7
after
a : 7
b : 2
```

##### 입력2

```text
23 86
```

##### 출력2

```text
before
a : 23
b : 86
after
a : 86
b : 23
```
