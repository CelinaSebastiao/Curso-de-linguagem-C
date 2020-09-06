#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: a and b
   OUTPUT: Maximum number
    
  */
  int a;
  int b;
  
  printf("Insert a first Number:");
  scanf("%d",&a);
  printf("Insert a second Number:");
  scanf("%d",&b);
  
  if(a<b){
	printf("THE MAXIMUM NUMBER IS: %d",b);
  }else{
	printf("THE MAXIMUM NUMBER IS: %d",a);
  }
  
  return 0;
}