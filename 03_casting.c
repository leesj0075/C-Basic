#include <stdio.h>

int main()
{
    //캐스팅이란 : 형변환 = 즉, 자료형이 바뀐다.

    //묵시적 캐스팅
    int num = 3.14;
    double pi = 3.14;

    printf("num : %d\n", num);
    printf("pi : %f\n", pi);

    //명시적 캐스팅
    int iNum = 2147483647;
    int originNum = iNum;
    short sNum = iNum;

    printf("originNum : %d\n", originNum);
    printf("sNum : %d\n", sNum);

    double f = 0.33333;
    int i = (int)f;

    double result1 = 1 / 3;
    double result2 = (double) 1 / 3;

    printf("result1 : %f\n", result1);  printf("result2 : %f\n", result2);

    return 0;
}
