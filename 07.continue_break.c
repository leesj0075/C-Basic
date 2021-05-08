#include <stdio.h>
int main()
{
    //1~10까지 출력하는데 5를 제외하고 출력
    int a, b, c;
    a=1; 
    while(a<=10)
    {
        if(a==5)
        {
          a++;  
          continue;
          //break;
        } 
        printf("%d\n", a);
       a++;
    }



    return 0;
}