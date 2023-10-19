#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i;           
  //int temp; - 생존기간  for 문 int temp를 지운다 
  
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
