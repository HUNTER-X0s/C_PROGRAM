
// print the following pattern using C programming language.Here is a C program that prints a star pattern.
/*

****
 ***
  **
   *

*/

#include <stdio.h>

int main(){
    int n = 4;
    for(int i=n ; i>=1;i--){
         for(int j = 0; j <= n-i; j++){
            printf(" ");
        }
        for(int j = i; j >= 1; j--){
            printf("*");
        }
        printf("\n");

    }
    return 0;
}
  