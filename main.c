#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int flag = 1;
  int y;           //add
  while(flag != 0)
  {
   int y;         //y scope
   y = 3;         
   flag = 0;      //y scope
  }
  y = 4;  // compile error
  system("PAUSE");	
  return 0;
}
