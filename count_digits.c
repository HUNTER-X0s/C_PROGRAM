#include <stdio.h>

int main() {
    int num = 12345; // Example number
    int count = 0;

    do {
        count++;
        num = num / 10;
    } while (num != 0);

    printf("%d", count);

    return 0;
}