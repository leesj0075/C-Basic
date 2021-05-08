#include <stdio.h>

int main(){

    printf("Hello\nWorld! : %d, %s, %c\n", 10, "Ten", 65);

    // 여기서 잠깐~! 배열이란?
    int score1 = 10;
    int score2 = 20;
    int score3 = 30;

    int scores[3] = {10, 20, 30}; // 0, 1, 2
    printf("%d\n", scores[1]);

    char str[] = "Hello";
    printf("%s\n", str);

    char g[10], h[10];

    scanf("%s %s", g, h);
    printf("이름:%s, 별명:%s\n",g, h);

    return 0;
}
