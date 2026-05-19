// print the following pattern using C programming language.Here is a C program that prints a star pattern.
/*

*****
*   *
*   *
*   *
*****

*/

#include <stdio.h>
int main(){ 
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(i==1 || j==1 || i==n || j==n){
            printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}