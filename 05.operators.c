#include <stdio.h>
#include <stdbool.h>

/* 
    연산자
 */

int main()
{
    //산술연산자 +, -, *, /, %
    printf("%s\n", "산술연산자");
    printf("%d\n", 5 + 10);     //15
    printf("%d\n", 5 - 10);     //-5
    printf("%d\n", 5 * 10);     //50
    printf("%f\n", 10.0 / 3.0); //3.333333
    printf("%d\n", 10 % 3);     //1
    printf("%s\n", "===================");

    //복합연산자 +=, -=, *=, /=, %=
    printf("\n\n\n%s\n", "복합연산자");
    int seed = 10;
    int num1 = 10;
    int num2 = 20;
    seed = seed + 2;
    seed = seed + 2;
    seed = seed + 2;
    seed = seed + 2;
    seed += 2;
    seed = seed - 2;
    seed -= 2;
    printf("%d\n", seed); //16
    seed *= 2;
    printf("%d\n", seed); //32
    seed /= 4;
    printf("%d\n", seed); //8
    seed %= 2;
    printf("%d\n", seed); //0
    printf("%s\n", "===================");

    //증감연산자 ++ --
    printf("\n\n\n%s\n", "증감연산자");
    int count = 10;
    count++;
    printf("%d\n", count); //11
    count--;               //후위
    --count;               //전위
    printf("%d\n", count); //9

    //// 전위와 후위
    int after_count;
    count = 10;
    after_count = count++;
    printf("after_count = count++ 이후의 after_count의 값 : %d\n", after_count); //10
    printf("\t\t\t\t\tcount : %d\n", count);                                     //11
    after_count = ++count;
    printf("after_count = ++count 이후의 after_count의 값 : %d\n", after_count); //12
    printf("\t\t\t\t\tcount : %d\n", count);                                     //12

    printf("%s\n", "===================");

    //비교연산자 ==, !=, >, >=, <, <=
    printf("\n\n\n%s\n", "비교연산자");
    bool isTrue = false;    //1 : True, 0 : False
    isTrue = (10 == 10);    //10은 10이다 equal
    printf("%d\n", isTrue); //1

    isTrue = (10 != 10);    //10은 10은 아니다 : 개소리, ! : not
    printf("%d\n", isTrue); //0

    isTrue = (10 > 10);
    printf("%d\n", isTrue); //0

    isTrue = (10 >= 10);
    printf("%d\n", isTrue); //1

    isTrue = (10 < 10);
    printf("%d\n", isTrue); //0

    isTrue = (10 <= 10);
    printf("%d\n", isTrue); //1

    printf("%s\n", "===================");

    //논리연산자 &&(and), ||(or), !(not)
    printf("\n\n\n%s\n", "논리연산자");
    bool prop1 = 10 > 3;   //true
    bool prop2 = 13 == 12; //false
    bool prop3 = 2 <= 3;   //true
    /* 
         - and
        true && true = true
        나머지는 false

         - or
        하나만 true여도 true

         - not
        true --> false, false --> true
     */

    printf("%d\n", prop1 && prop2); //0
    printf("%d\n", prop1 && prop3); //1
    printf("%d\n", prop1 || prop2); //1
    printf("%d\n", !prop2);         //1



    //비트연산 AND(&), OR(|), XOR(^), NOT(~), SHIFT(<<, >>)
    // 2의 보수

    // 삼항연산자 : 조건식 ? true 부분 : false 부분;
    printf("\n\n\n%s\n", "삼항연산자");
    int q = 10 < 20 ? 100 : 200;
    printf("%d\n", q);
    printf("%s\n", "===================");

    // sizeof() 연산
    printf("\n\n\n%s\n", "sizeof 연산");
    printf("%d\n", sizeof(12)); //int이기 때문에 4 byte이다. 왜냐하면 정수는 기본적으로 int가 적용된다.
    long l = 12; //이거 쪼쪼쪼오오오오오끔 느리다. 12는 원래 int, 근데 long 변수에 들어가야하니까 long 형변환하는 연산이 생겨난다.
    int i = 12; //얘는 그냥 들어가면 된다.
    printf("%d\n", sizeof(3.14)); //실수는 double이 기본 : 8
    printf("%d\n", sizeof(char)); //1;
    printf("%d\n", sizeof(double)); //8
    printf("%d\n", sizeof(long long)); //8
    printf("%d\n", sizeof(float)); //4

    printf("%s\n", "===================");

    // 주소연산(&)과 참조연산(*)
    printf("\n\n\n%s\n", "주소연산과 참조연산");
    //정보과학 교과서에는 참조연산이 없다. 포인터(Pointer);
    int something = 100;
    printf("%d\n", &something); //something의 주소 ex) 644002 (주소값)
    int * address = &something;

    printf("%s\n", "===================");

    return 0;
}