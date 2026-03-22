#include <stdio.h>

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    int i, key, j;

    for (i = 1; i < size; i++) {
        key = arr[i];   // element to be inserted
        j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;  // place key at correct position
    }
}

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

// Main function
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("\nSorted array:\n");
    printArray(arr, size);
    printf("\nKhushali Shandilya");

    return 0;
}
