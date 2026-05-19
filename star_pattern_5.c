// print the following pattern using C programming language.Here is a C program that prints a star pattern.
/*

6666666
 555555
  44444
   3333
    222
     11
      0

*/

#include <stdio.h>

int main(){
    int n = 6;
    for(int i=n ; i>=0; i--){
        for(int j = 0; j < n-i; j++){
           printf(" ");
        }
        for(int j = 0; j <= i; j++){
           printf("%d", i);
        }
        printf("\n");

    }
    return 0;
}
  