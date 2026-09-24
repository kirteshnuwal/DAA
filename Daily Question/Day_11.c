#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = {-4, -3, -5, 1, 2, 3};
    int n = 6;

    for (int i = 0; i < n; i++)
        a[i] = a[i] * a[i];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
