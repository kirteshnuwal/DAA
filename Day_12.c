#include <stdio.h>

int main() {
    int a[] = {5, 5, 7, 8, 8, 9, 9, 10, 10};
    int n = 9, j = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    for (int i = 0; i <= j; i++)
        printf("%d ", a[i]);

    return 0;
}
