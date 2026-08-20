#include <stdio.h>

int main() {
    int n, digit, sum = 45;

    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        sum = sum - digit;
        n = n / 10;
    }

    printf("Missing digit = %d", sum);

    return 0;
}
