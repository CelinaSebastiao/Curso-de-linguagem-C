#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: number
   OUTPUT: divisible by 5 and 11
    
  */
  int number;
  
  printf("Insert a Number:");
  scanf("%d",&number);
  
  if((number % 5 == 0) && (number % 11 == 0)){
	printf("THE NUMBER %d IS DIVISIBLE BY 5 and 11!",number);
  }
  else{
	  printf("THE NUMBER %d IS NOT DIVISIBLE BY 5 and 11!",number);
	 
  }
  
  return 0;
}