#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 5, 9, 12};
    int arr2[] = {4, 8, 15, 20};
    int n = 4, m = 4;
    int min = 999, diff;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            diff = abs(arr1[i] - arr2[j]);

            if(diff < min)
                min = diff;
        }
    }

    printf("Smallest Difference = %d", min);

    return 0;
}
