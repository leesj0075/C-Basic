# About C Language

## - History

 - 기계어
 - 어셈블리어(1950초 : Grace Hopper), 기호언어
 - 고급언어(`Fortran -> Algol -> CPL -> BCPL -> B -> C`)
    - [Genealogy of Programming Languages](https://www.thinglink.com/scene/536427472728621058)


## - Structure

 - 코드(code) 영역 : 실행할 프로그램의 코드, CPU가 하나씩 가져가서 처리
 - 데이터(data) 영역 : global 변수, static 변수, 프로그램 종료시 소멸
 - 스택(stack) 영역 : local 변수와 parameter, 호출이 완료되면 소멸
 - 힙(heap) 영역 : 직접관리하는 사용자 메모리 영역, 동적으로 할당되고 해제됨


## - 실행 순서

 - 소스 파일(.c)
 - 컴파일러( preprocessor | translator ) + 어셈플러
 - 기계어(.o)
 - 링커(含 표준 라이브러리 파일.o)
 - 실행 파일(.exe)

## - 주석

```c
// 라인 주석

/*
    멀티 주석
    멀티 주석

    //라인 주석
*/
```

## - 입출력

### * printf() 함수

```c
#include <stdio.h>

int main()
{
    printf("Hello\nWorld! : %d, %s", 10, "Ten");

    return 0;
}
```

### * scanf() 함수

```c
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("---더하기---\n");
    printf("첫번째 정수 : ");
    scanf("%d", &num1);
    printf("두번째 정수 : ");
    scanf("%d", &num2);

    printf("result : %d", num1 + num2);

    return 0;
}
```

#### 인코딩 문제 발생시

```command
chcp 650001
```

<br><br><br><br><br>

<hr>

<br><br><br><br><br>

# 변수, 상수, 타입

## - 명명법

영문자, 숫자, 언더스코어로만 구성

키워드 NO NO

변수는 메모리의 주소를 기억하는 역할

## - 변수 할당

```
타입 변수이름;
```

## - 상수

### * literal

변수든 상수든 담아야 메모리 공간을 할당받는다.

```c
123 //정수
3.14 //실수
'a' //문자
```

### * symbolic constant

```c
const int PI = 3.14; //심볼릭 상수
#define PI 3.14; //선행처리 지시자를 이용한 매크로 심볼릭 상수
```

## - 타입

### * 정수형
 - char, short, int, long

### * 실수형
 - float, double

### * signed and unsigned

 - `signed` : 양수, 0

 - `unsigned` : 음수, 부호가 없는 것. 범위는 같지만 양수의 범위를 더 표현 가능

`int`가 제일 빠름, `double`은 표현 범위가 float보다 크고 정밀도도 정확함

### * 캐스팅

#### 묵시적 캐스팅

```c
#include <stdio.h>

int main()
{
    int num = 3.14;
    double pi = 3.14;

    printf("num : %d\n", num); //3
    printf("pi : %f\n", pi);   //3.140000

    return 0;
}
```

### 명시적 캐스팅

```c
#include <stdio.h>

int main()
{
    double result1 = 1 / 3;
    double result2 = (double)1 / 3;

    printf("num : %f\n", result1); //0.000000
    printf("pi : %f\n", result2);  //0.333333

    return 0;
}
```

<br><br><br><br><br>

<hr>

<br><br><br><br><br>

# 연산자

## - 산술연산

`+, -, *, /, %`

## - 복합연산(대입연산)

`=, +=, -=, *=, /=, %=`

## - 증감연산

### * 전위 및 후위

 - 전위 : `++x, --x`

 - 후위 `x++, x--`

## - 비교연산

`==, !=, >, >=, <, <=`

## - 논리연산

`&&, ||, !`

### * 효율적인 연산

## - 비트연산

 - AND : `&`
 - OR : `|`
 - XOR : `^`
 - NOT : `~`
 - shift : `<<`, `>> : 부호 유지`

## - 삼항연산

```
조건식 ? true 부분 : false 부분;
```

## - `sizeof()`

메모리의 크기

## - 포인터연산

 - `&` : 주소연산
 - `*` : 참조연산

<br><br><br><br><br>

<hr>

<br><br><br><br><br>

# 제어문

## - 조건문

### * if문

```c
if(조건식)
{
    statement
}
else if(조건식)
{
    statement
}
else
{
    statement
}
```

```c
#include <stdio.h>

int main()
{
    if (5 < 3)
    {
        printf("if문이 참이다.");
    }
    else if (5 > 3)
    {
        printf("else if 문이 참이다."); //여기가 출력됨
    }
    else
    {
        printf("참이 없다.");
    }

    return 0;
}
```

### * switch문

```c
#include <stdio.h>

int main()
{

    int choice = 2;

    switch (choice)
    {
    case 1:
        printf("choice : 1");
        break;
    case 2:
        printf("choice : 2"); // 여기가 출력됨
        break;
    case 3:
        printf("choice : 3");
        break;
    default:
        break;
    }

    return 0;
}
```

## - 반복문

### * while문

### * do~while문

### * for문

```c
for (초기식; 조건식; 증감식)
{
    statement
}
```

### * continue & break

<br><br><br><br><br>

<hr>

<br><br><br><br><br>

# 함수

## - 출력과 리턴의 차이

## - 함수 정의

```c
int sum(int x, int y)
{
    return x + y;
}
```

## - 함수 원형 선언과 사용

```c
int sum(int, int); //함수 원형 선언

int main()
{
    int result = sum(10, 20);
    printf("%d", result); //30
    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
```