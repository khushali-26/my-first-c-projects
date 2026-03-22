#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    for (i = 0; i < size - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with first element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

// Main function
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    selectionSort(arr, size);

    printf("\nSorted array:\n");
    printArray(arr, size);
    printf("\nKhushali Shandilya");
    return 0;
}