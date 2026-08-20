#include <stdio.h>

int main() {
    int a[] = {10, 12, 15, 14, 16, 18, 20};
    int n = 7, count = 1, max = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1])
            count++;
        else
            count = 1;

        if (count > max)
            max = count;
    }

    printf("%d", max);
    return 0;
}
