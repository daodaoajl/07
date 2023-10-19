#include <stdio.h>
#include <stdlib.h>

int i;
void f(void);

int main(void)
{         
  for (i=0; i<5; i++)
  {
      f();    
  }
  getchar();
  return 0;
}

void f(void)
{
  for (i=0; i<10; i++)
      printf("#");    
}
//i를 지역변수로 변환
 
