#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: a, b and c
   OUTPUT: Maximum number
    
  */
  int a;
  int b;
  int c;
  
  printf("Insert a first Number:");
  scanf("%d",&a);
  printf("Insert a second Number:");
  scanf("%d",&b);
  printf("Insert a third Number:");
  scanf("%d",&c);
  
  if((a>b) && (a>c)){
	printf("THE MAXIMUM NUMBER IS: %d",a);
  }
  
  else if((b>a) && (b>c)){
	printf("THE MAXIMUM NUMBER IS: %d",b);
  } else{
	  printf("THE MAXIMUM NUMBER IS: %d",c);
	 
  }
  
  return 0;
}