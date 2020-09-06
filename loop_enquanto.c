#include <stdio.h>
#include <stdlib.h>

  /* 
  INPUT: Number
  OUTPUT: odd numbers and divisible for 3
    
  */
  
int main(int argc, char const *argv[]) {

  int number = 1;
  
  while(number <= 10000)
  {
	if((number % 2 == 0) && (number % 3 == 0))
	{
		printf("%d\n",number);
	}
	number++;
  }
  
  return 0;
}