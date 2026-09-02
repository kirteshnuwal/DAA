#include <stdio.h>

void reverse(int a[], int start, int end) {
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

void rotate(int a[], int n, int k) {
    k = k % n;

    reverse(a, 0, n - 1);
    reverse(a, 0, k - 1);
    reverse(a, k, n - 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, k = 3;

    rotate(a, n, k);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
