#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
  int i = 10;           
  printf("�Լ� ȣ�� �� i=%d\n", i);
  inc(i); //i�� ���纻�� inc�Լ��� ���´�. call by value 
  // i = inc(i); //�Լ� ����� i�� ���� 
  printf("�Լ� ȣ�� �� i=%d\n", i);
  
  getchar();
  return 0;
}

int inc(int counter)//int counter : �������� 
{ 
 counter++;
 return counter; 
}
 
