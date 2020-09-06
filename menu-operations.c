#include <stdio.h>
#include <stdlib.h>

  /* 
  INPUT: option,number 1 and number2
  OUTPUT: Operations betwen two numbers
    
  */
  
int main(int argc, char const *argv[]) {
  
   int number1, number2;
        int option;

        do
        {
        printf("**********************************************");
                printf("\n\nChoice the option\n");
                printf("\t1 - SUM\n");
                printf("\t2 - MINUS\n");
                printf("\t3 - MULTIPLICATION\n");
                printf("\t4 - DIVISION\n");
                printf("\t5 - LOGOUT\n");
	    printf("**********************************************\n");

                printf("option: ");
                scanf("%d", &option);

        }while(option < 1 || option > 5);
		 
		
		printf("\nInsert first number: ");
		scanf(" %d", &number1);
		printf("\nInsert second number: ");
        scanf(" %d", &number2);
		
		switch(option)
        {
                case 1:
						printf("\n\tPlus Opration\n");
                        printf("\t%d + %d = %d\n", number1, number2, number1 + number2 );
                break;

                case 2:
                        printf("\n\tMinus Operation\n");
                        printf("\t%d - %d = %d\n", number1, number2, number1 - number2);
                break;

                case 3:
                        printf("\n\tMultiplication Operation\n");
                        printf("\t%d * %d = %d\n", number1, number2, number1 * number2 );
                break;

                case 4:
                        if(number2 == 0)
                                printf("Divide by zero\n");
                        else
                                printf("\n\tDivide Operation\n");
                                printf("%d / %d = %d\n", number1, number2, number1 / number2 );
                break;
				
				case 5:
						exit(0);
				
                default:
                        printf("Invalid Operation: \n");
        }
   

  return 0;
}