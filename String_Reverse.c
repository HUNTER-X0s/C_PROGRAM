#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);
 
    for (i = 0; i < length / 2; i++) {
        char firstValue = str[i];
        char SecondValue = str[length - i - 1];
        str[i] = SecondValue;
        str[length - i - 1] = firstValue;
    }

    printf("Reversed string: %s", str);

    return 0;
}