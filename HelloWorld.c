#include <stdio.h>

int main(){

  int square_length;

	printf("정방 행렬의 크기는?");
	scanf("%d", &square_length);

  int matrixA[square_length][square_length];
  int matrixB[square_length][square_length];

  printf("%d X %d 크기의 첫번째 행렬에 들어갈 숫자를 입력하세요.\n",square_length, square_length);
  printf("[예를들어, 3 X 3 행렬이라면 1 2 3 4 5 6 7 8 9] :");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      scanf("%d", &matrixA[i][j]);
    }
  }

  printf("%d X %d 크기의 두번째 행렬에 들어갈 숫자를 입력하세요.\n",square_length, square_length);
  printf("[예를들어, 3 X 3 행렬이라면 1 2 3 4 5 6 7 8 9] :");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      scanf("%d", &matrixB[i][j]);
    }
  }

	printf("1번째 배열입니다.\n");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      printf("%d ", matrixA[i][j]);
    }
    printf("\n");
  }


	printf("2번째 배열입니다.\n");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      printf("%d ", matrixB[i][j]);
    }
    printf("\n");
  }


	printf("행렬의 합 \n");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      printf("%d ", matrixA[i][j] + matrixB[i][j]);
    }
    printf("\n");
  }

	printf("행렬의 차\n");
  for(int i=0; i<square_length; i++)
  {
    for(int j=0; j<square_length; j++)
    {
      printf("%d ", matrixA[i][j] - matrixB[i][j]);
    }
    printf("\n");
  }

	printf("행렬의 곱\n");
  int a = 1;
  for(int i = 0; i < square_length; i++)
  {
    a--;
    for(int j = 0; j < square_length; j++)
    {
      int sum = 0;
      for(int k = 0; k < square_length; k++)
      {
        sum += matrixA[i][k] * matrixB[k][i+a+j];
      }
      printf("%d ", sum);
    }
    printf("\n");
  }


}