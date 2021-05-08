#include <stdio.h>

int main(){
    // 효율적인 논리연산 OR
    int testNum = 10;

    int result = ++testNum || ++testNum; //OR연산은 하나만 TRUE여도 어쨋든 TRUE이기 때문에 넘어간다.

    printf("test number [OR] : %d\n", testNum); //11
    printf("result : %d\n", result);

    // 효율적인 논리연산 AND
    testNum = 10;

    result = 0 && ++testNum;
    printf("test number [AND] : %d\n", testNum); //10
    printf("result : %d\n", result);
    return 0;
}