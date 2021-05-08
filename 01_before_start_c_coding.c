/* 주석에 대해서 */

// 라인 주석

/*
    멀티 주석

    License
    Author
    ...

    // 라인 주석
*/

/* 프로그래밍을 할 때 주의해야 할 점 */
/*
    완벽을 버려야한다. 완벽이란? 주관적
    모든 걸(ex 문법) 알고 본격적으로 뭔가 만들려고 하면 안된다.
    
     - Correctness      정확성
     - Portability      이식성
     - Readability      가독성
     - Maintainability  유지보수성
*/

#include <stdio.h> //standard input output

/* main() 함수는 왜 리턴이 있는 걸까? 어짜피 종료되면 끝인데?

      1. 어쨋든 main()은 함수다. 함수의 문법을 따라야 한다.
(주의)2. 실행한 명령어가 성공했는지 실패했는지 어떻게 알까?
            예) `리눅스에서 $? 명령어를 치면 이전 명령어가 성공하면 0, 아니면 0이 아닌 다른 숫자가 나온다.
            그래서 main()함수가 무사히 마쳤는지 안마쳤는지 표현하려면 int로 반환하는 main이 이상적이라고 생각한다.
      3. C언어를 만든 사람에게 현피를 건다.

*/

int main() //왜 int main일까? 프로그램이 실행할 때의 기준 = main()
{
    int num;
    printf("HI \\ \"James\" ");
    printf("Hello World\n\n\n\n\n"); //output
    scanf("%d",&num); //input
    printf("입력 후 결과 %d\n",num);
    printf("akfaff : %d %d %d \n",10, 20, 30);
    return 0; //함수의 동작을 마무리하는데 무엇을 반환할 것이냐
}

/* Encoding이란

    컴퓨터는 0과 1밖에 모르기 때문에 문자가 숫자(0,1)로 변환되어 저장된다. 
    그래서 인코딩을 맞춰야 한다.

    터미널 인코딩을 바꾸려면 chcp 65001 라고 명령어를 치면 된다
*/