#include <stdio.h>

int myFunc(int num, int num2){
  return num + num2;
}

int main()
{
  printf("Hello world!!!\n");
  printf("%d", myFunc(10, 20));
  
  return 0;
}