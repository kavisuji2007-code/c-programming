#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, new_n, i;

    // Initial size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input values
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // New size
    printf("Enter new size: ");
    scanf("%d", &new_n);

    // Reallocate memory using realloc
    arr = (int *)realloc(arr, new_n * sizeof(int));

    // Check reallocation
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // If size increased, take new values
    if (new_n > n) {
        printf("Enter %d more elements:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display final array
    printf("Final array elements:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}Enter number of elements: 1
Enter 1 elements:
23
Enter new size: 2
Enter 1 more elements:
56
Final array elements:
23 56
