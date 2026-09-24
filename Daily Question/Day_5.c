#include <stdio.h>

int main() {
    int n, ones = 0, zeros = 0, count = 0, max = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        if (n % 2 == 1) {
            ones++;
            count++;
            if (count > max)
                max = count;
        } else {
            zeros++;
            count = 0;
        }
        n = n / 2;
    }

    printf("1s = %d\n", ones);
    printf("0s = %d\n", zeros);
    printf("Consecutive 1s = %d", max);

    return 0;
}
