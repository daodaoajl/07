#include <stdio.h>
#include <stdlib.h>

int counter;

void set_counter()
{
     counter = 20;     
}

int main(void)
{         
  printf("counter = %d\n", counter); //counter = 0
  set_counter();// �Լ� ���� 
  printf("counter = %d\n", counter); //counter = 20 
  
  getchar();
  return 0;
}
