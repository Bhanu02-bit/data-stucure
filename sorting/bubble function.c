#include <stdio.h>

void bubblesort(int arr[6]) {
    int i, j, temp, n = 6;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nThe sorted values:\t");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

int main() {
    int arr[6] = {9, 3, 4, 1, 4, 6};
    int n = 6;

    printf("The original values:\t");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    bubblesort(arr);

    return 0;
}
