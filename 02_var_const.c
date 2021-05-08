/* 
   자료형, 변수, 상수
   [타입] [변수/상수 이름]

   이름을 지을 때 주의해야할 것 : 정보과학 교과서 p14
 */
#include <stdio.h>
#include <limits.h>
#define PI 3.14

int main()
{
    //자료형, sizeof는 크기
    //signed, unsigned : unsigned는 양수만, 맨앞에 있는 진수는 원래 양수인지(0), 음수인지(1) 
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));

    //C언어에서 정수는 기본적으로 int다.
    printf("그냥 10의 크기는? : %d\n", sizeof(10));
    printf("int로 최대로 표현할 수 있는 최소값: %d, 최대값 : %d\n", INT_MIN, INT_MAX);

    int int_max = 2147483647; //최대값
    int num = 10; //선언 + 초기화
    int num2; //선언
    num2 = 10; //초기화

    int num3;
    printf("%d\n",num3); //Default 값

    //변수와 상수의 차이
    int n = 10;
    n = 20;

    const int PI = 3.14;
    
    // 변수와 상수의 이름 명명

/* 
    변수는 소문자
        the number of student
        camel 명명법 : theNumberOfStudent
        snake 명명법 : the_number_of_student
        헝가리안 명명법 : iTheNumberOfStudent

    상수는 대문자
        THE NUMBER OF STUDENT
            THE_NUMBER_OF_STUDENT
 */


    return 0;
}

