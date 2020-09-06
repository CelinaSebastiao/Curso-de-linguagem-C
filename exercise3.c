#include <stdio.h>
#include <stdlib.h>

  /* 
  INPUT: number week
  OUTPUT: print week day
    
  */
  
int main(int argc, char const *argv[]) {
  
   int number;
   printf("Insert a week number between(0-6):\n");
   scanf("%d", &number);

		
		switch(number)
        {
                case 0:
						
                        printf("\n %d IS Sunday ", number);
                break;

                case 1:
                        printf("\n %d IS Monday ", number);
                break;

                case 2:
                        printf("\n %d IS Tuesday ", number);
                break;

                case 3:
                        printf("\n %d IS Wednesday ", number);
                break;
				 
				 case 4:
                        printf("\n %d IS Thursday ", number);
                break;
				case 5:
						printf("\n %d IS Friday ", number);
				break;		
				case 6:
						printf("\n %d IS Saturday ", number);
				break;
                default:
                        printf("Invalid Operation: \n");
        }
   

  return 0;
}