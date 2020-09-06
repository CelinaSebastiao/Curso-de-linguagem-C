#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[]) {

int a,b;

for (a = 7; a >= 1; a = a - 1){
          for (b = 1; b <= a; b = b + 1) printf("*");
        putchar('\n');
   }
   
getchar ();
return 0;

}