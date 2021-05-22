#include <stdio.h>

typedef struct
{
  char reg_num[30];
  char issue_addr[10];
  char country[20];
}IDENTITY;

typedef struct
{
    char name[10];
    int age;
    IDENTITY identity;
}HUMAN;


void info(HUMAN someone)
{
  printf("이 사람의 이름은 %s이며, 나이는 %d입니다.\n",someone.name, someone.age);
  printf("그리고 신분증 정보는 다음과 같습니다. [주민번호:%s, 발급지:%s, 국적:%s]\n"
    ,someone.identity.reg_num, someone.identity.issue_addr, someone.identity.country);
}

int main()
{

  HUMAN humans[3] = {
    {"Eddie", 15, {"1234", "서울", "한국"}},
    {.age=30,.name="Alice",.identity={.reg_num="2345", .issue_addr="뉴욕",.country="미국"}},
    {.age=15,.name="SJ",.identity={.reg_num="3456", .issue_addr="대전",.country="한국"}}
  };

  int len = sizeof(humans) / sizeof(humans[0]);

  for (int i = 0; i < len; i++)
  {
    info(humans[i]);
  }

  return 0;
}