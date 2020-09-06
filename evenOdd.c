#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: number
   OUTPUT: even or odd
    
  */
  
  int number;
  
  
  printf("Insert the number:");
  scanf("%d",&number);
  
  if( number%2 == 0){
	printf("THE %d IS AN EVEN NUMBER ",number);
  }else{
     printf("THE %d IS AN ODD NUMBER ",number);
  }
  
  return 0;
}