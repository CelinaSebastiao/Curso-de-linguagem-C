#include <stdio.h>
#include <stdlib.h>

  /* 
  INPUT: 3 marks: phy, chem and math they all are of float type
  OUTPUT: The candidate is eligible for admission. 
    
  */
  
int main(int argc, char const *argv[]) {
  
 float phy, chem, math,total, total2;
  
 printf("Insert the marks obtained in Physics:");
 scanf("%f",&phy); 
   
 printf("Insert the marks obtained in  Chemistry:");
 scanf("%f",&chem); 
   
 printf("Insert the marks obtained in Mathematics:");
 scanf("%f",&math);  
 
 total = phy+chem+math;
 total2 = math + total;
   
   if( (phy >= 55) && (math >= 65) && (chem >= 50))
	 printf("The candidate is eligible for admission.\n");
	 
  else if( (total >= 180) ||(total2 >= 140))
	 printf("The candidate is eligible for admission.\n");
  else 
	  printf("The candidate is not eligible for admission.\n");
   
		
 return 0;
}