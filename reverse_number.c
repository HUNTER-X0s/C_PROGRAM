#include <stdio.h>

int main() {
    int num = 120;
    int rev = 0;
    while(num != 0){
        int digit = num % 10;
        rev = rev * 10 +  digit;
        num = num / 10;
    }
    printf("%d",rev);
    return 0;
}


