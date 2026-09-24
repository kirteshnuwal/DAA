#include <stdio.h>

int main() {
    int n, i, low, high, mid;
    int a[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    low = 0;
    high = n - 1;

    while(low < high) {
        mid = low + (high - low) / 2;

        if(mid % 2 == 1)
            mid--;

        if(a[mid] == a[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }

    printf("Single element = %d", a[low]);

    return 0;
}
