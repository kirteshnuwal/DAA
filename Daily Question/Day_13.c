#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int m, n, i, j, k = 0;
    float median;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements: ");
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    // Merge both sorted arrays
    i = 0; j = 0;
    while(i < m && j < n) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < m)
        c[k++] = a[i++];

    while(j < n)
        c[k++] = b[j++];

    // Find median
    if((m + n) % 2 == 0)
        median = (c[(m+n)/2 - 1] + c[(m+n)/2]) / 2.0;
    else
        median = c[(m+n)/2];

    printf("Median = %.2f", median);

    return 0;
}
