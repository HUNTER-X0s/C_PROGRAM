#include <stdio.h>

int main(){
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= 5; j++) {
            if(i==1 || j==1 || i==4 || j==5) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n+1-i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n = 5;
    int k = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d\t", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            int sum = i + j;
            if(sum % 2 == 0) {
                printf("1  ");
            }
            else {
                printf("0  ");
            }
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
                printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
                printf(" ");
        }
        for(int j = 1; j <= i; j++) {
                printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n+1-i; j++) {
                printf("*");
        }
        for(int j = 1; j <= (2*i)-2; j++) {
                printf(" ");
        }
        for(int j = 1; j <= n+1-i; j++) {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(){
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
                printf(" ");
        }
        for(int j = i; j >= 1; j--) {
                printf("%d", j);
        }
        for(int j = 2; j <= i; j++) {
                printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 2*(n-i)+1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
