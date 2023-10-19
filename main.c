#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
  int i = 10;           
  printf("함수 호출 전 i=%d\n", i);
  inc(i); //i의 복사본이 inc함수에 들어온다. call by value 
  // i = inc(i); //함수 결과를 i에 넣음 
  printf("함수 호출 후 i=%d\n", i);
  
  getchar();
  return 0;
}

int inc(int counter)//int counter : 지역변수 
{ 
 counter++;
 return counter; 
}
 
