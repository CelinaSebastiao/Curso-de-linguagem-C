#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: number
   OUTPUT: Negative or positive or zero
    
  */
  int number;
  
  printf("Insert a Number:");
  scanf("%d",&number);
  
  if(number < 0){
	printf("THIS NUMBER IS NEGATIVE: %d",number);
  }
  
  else if(number == 0){
	printf("THIS NUMBER IS ZERO: %d",number);
  } else{
	  printf("THIS NUMBER IS POSITIVE: %d",number);
	 
  }
  
  return 0;
}