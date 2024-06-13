#include <stdio.h>

int main() {
    int n, i, j;
    
    // Prompt the user to enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements in the array are: ");
    int found_duplicate = 0;

    // Check for duplicates
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found_duplicate = 1;
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }

    if (!found_duplicate) {
        printf("None");
    }

    printf("\n");

    return 0;
}

