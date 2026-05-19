#include<stdio.h>

int gcd(int x,int y){
    while(x!=y){
        if(x>y){
            x = x-y;
        }
        else{
            y = y-x;
        }
    }
    return x; //or return y
}
int main(){
    int x = 12, y = 8;
    printf("GCD of %d and %d is %d", x, y, gcd(x, y));
    return 0;
}