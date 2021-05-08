#include <stdio.h>

int main()
{
  int nums[] = {6,2,9,5,8,1,3};
  //오름차순 {1,2,3,5,6,8,9}
  //내림차순 {9,8,6,5,3,2,1}

  for(int i = 0; i < sizeof(nums)/sizeof(int) - 1; i++)
  {
    for(int j = i + 1; j < sizeof(nums)/sizeof(int); j++)
    {
      if(nums[i] > nums[j])
      {
        int temp = nums[i];
        nums[i] = nums[j]; 
        nums[j] = temp; 
      }
    }
  }

  int length = sizeof(nums)/sizeof(nums[0]);
  printf("The array's length is : %d\n", length);  
  printf("[");
  for(int i = 0; i < length; i++)
  {
    if(i==length - 1)
    {
      printf("%d",nums[i]);
      break;
    }
    printf("%d, ",nums[i]);

  }
  printf("]\n");

  return 0;
}

