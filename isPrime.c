#include <stdio.h>

int main() 
{
    int x, i;
    printf("number:");
    scanf("%d", &x);

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            printf("%d is not a prime", x);
            return 0; }}

    printf("%d is prime", x);
    return 0;
}
