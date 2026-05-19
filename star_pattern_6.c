// print the following pattern using C programming language.Here is a C program that prints a star pattern.
/*

0000000
 111111
  22222
   3333
    444
     55
      6

*/

#include <stdio.h>

int main(){
    int n = 6;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < i; j++){
           printf(" ");
        }
        for(int j = 0; j <= n-i; j++){
           printf("%d", i);
        }
        printf("\n");

    }
    return 0;
}
  