#include <stdio.h>
int main()
{
    //alice, bob 있다.
    //alice, bob 모두 1000원을 가지고 있다.
    //alice가 bob 200원을 송금한다.
    int alice = 1000; //800
    int bob = 1000; //1200

    //checkpoint 
    alice -= 200; 
    bob += 200; 
    //commit

    //alice 패스워드를 쳤을 때 1234과 같으면 bob에게 송금 아니면 틀렸다고 출력
    alice = 1000; 
    bob = 1000; 

    // int password;

    // printf("비밀번호를 입력하세요 : ");
    // scanf("%d", &password);

    //제어문(조건문, 반복문)의 존재 이유
    //장점 : 복잡한 코드를 작성할 수 있게 된다.
    //단점 : 그만큼 보안성이 민감해진다. DOS공격

    /* 제어문 : 조건문 */
    // if

    // int num = 10;

    // if(num > 5)
    // {
    //     printf("num은 5보다 크다.");
    // }
    // printf("num은 5보다 작다.");

    // else
    int num = 10;

    if(num > 5)
    {
        printf("num은 5보다 크다.\n");
    }
    else
    {
        printf("num은 5보다 작다.\n");
    }

    // if ~ else ~

    int score = 86;

    if(score > 90)
    {
        printf("1등급\n");
    }
    if(score > 80)
    {
        printf("2등급\n");
    }
    if(score >70)
    {
        printf("3등급\n");
    }
    if(score > 60)
    {
        printf("4등급\n");
    }
    else
    {
        printf("5등급\n");
    }

    printf("======================\n");

    // else if

    score = 86;

    if(score > 90)
    {
        printf("1등급\n");
    }
    else if(score > 80)
    {
        printf("2등급\n");
    }
    else if(score >70)
    {
        printf("3등급\n");
    }
    else if(score > 60)
    {
        printf("4등급\n");
    }
    else
    {
        printf("5등급\n");
    }

    /* 
        사용자가 1을 입력하면 Hello World 출력
        사용자가 2를 입력하면 Hello Python 출력
        사용자가 3을 입력하면 Hello Java 출력
        1, 2, 3도 아니면 "잘못 입력하셨습니다" 출력
     */
    
    // int choice;

    // printf("숫자를 입력하세요 : ");
    // scanf("%d", &choice);

    // if(choice==1)
    // {
    //   printf("Hello world");
    
    // }
    // else if(choice==2)
    // {
    //     printf("Hello Python");
    // }
    // else if(choice==3)
    // {
    //      printf("Hello Java");

    // }
    // else
    // {
    //     printf("잘못 입력하셨습니다. ");

    // }
    
    //switch
    // int choice;

    // printf("숫자를 입력하세요 : ");
    // scanf("%d", &choice);

    // switch (choice)
    // {
    //     case 1:
    //         printf("Hello world");
    //         break;
    //     case 2:
    //         printf("Hello Python");
    //         break;
    //     case 3:
    //         printf("Hello Java");
    //         break;
    //     default:
    //         printf("잘못 입력하셨습니다.");
    // }

    printf("==============\n");

    // 반복문

    int jame_score = 100;
    int bob_score = 86;
    int john_score = 79;

    score = jame_score;

    if(score > 90)
    {
        printf("1등급\n");
    }
    else if(score > 80)
    {
        printf("2등급\n");
    }
    else if(score >70)
    {
        printf("3등급\n");
    }
    else if(score > 60)
    {
        printf("4등급\n");
    }
    else
    {
        printf("5등급\n");
    }

    score = bob_score;

    if(score > 90)
    {
        printf("1등급\n");
    }
    else if(score > 80)
    {
        printf("2등급\n");
    }
    else if(score >70)
    {
        printf("3등급\n");
    }
    else if(score > 60)
    {
        printf("4등급\n");
    }
    else
    {
        printf("5등급\n");
    }

    score = john_score;

    if(score > 90)
    {
        printf("1등급\n");
    }
    else if(score > 80)
    {
        printf("2등급\n");
    }
    else if(score >70)
    {
        printf("3등급\n");
    }
    else if(score > 60)
    {
        printf("4등급\n");
    }
    else
    {
        printf("5등급\n");
    }

    // 반복문

    printf("-----------------\n");
    int scores[] = {50, 89, 99, 78, 61};

    //for(초기화;조건식;증감식)
    for(int i = 0; i < 5; i++)
    {
        score = scores[i];

        if(score > 90)
        {
            printf("1등급\n");
        }
        else if(score > 80)
        {
            printf("2등급\n");
        }
        else if(score >70)
        {
            printf("3등급\n");
        }
        else if(score > 60)
        {
            printf("4등급\n");
        }
        else
        {
            printf("5등급\n");
        }
    }


    printf("------------------\n");
    int choice;
    int power = 1;

    //while
    while(1)
    {
        printf("숫자를 입력하세요 : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Hello world\n");
                break;
            case 2:
                printf("Hello Python\n");
                break;
            case 3:
                printf("Hello Java\n");
                break;
            case 4:
                power = 0;
                break;
            default:
                printf("잘못 입력하셨습니다.\n");
        }

        if(power == 0)
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }

    printf("###------------------###\n");
    //do while문
    while(10 > 20)
    {
        printf("여기가 실행되요?\n");
    }

    do{
        printf("과연 실행될까요?\n");
    }while(10 > 20);

    return 0;
}