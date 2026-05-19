#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++) {

        if(i <= 1)
            continue; // skip 0 and 1

        isPrime = 1; // assume prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}