#include <stdio.h>
#include <stdlib.h>

int main() {

  /* 
   Autor: Celina Sebastião
   Data:13/08/202
   INPUT: breadth and length
   OUTPUT: perimeter of rectangle
    
  */
  
  float breadth;
  float length;
  float perimeter;
  
  printf("Insert the length:");
  scanf("%f",&length);
  printf("Insert the breadth:");
  scanf("%f",&breadth);
  
   perimeter = 2*(length + breadth);
 
    printf("THE PERIMETER OF RECTANGLE IS: %.2f",perimeter);
  
  return 0;
}