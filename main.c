#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;           
  //int temp; - �����Ⱓ  for �� int temp�� ����� 
  
  for(i=0;i<5;i++)
  {
   int temp = 1;  
   //static int temp = 1;      
   printf("temp = %d\n", temp);
   temp++;
  }
  
  system("PAUSE");	
  return 0;
}
/* result
temp=1
temp=1
temp=1
temp=1
temp=1
*/
