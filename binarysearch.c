#include <stdio.h>

int binarySearchIterative(int arr[], int size, int target) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;   // Element found

        else if (arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;  // Element not found
}
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;  // Base case: not found

    int mid = (low + high) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);

    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter element to search: ");
    scanf("%d", &target);

    // Iterative Search
    int result1 = binarySearchIterative(arr, size, target);
    if (result1 != -1)
        printf("Iterative: Element found at index %d\n", result1);
    else
        printf("Iterative: Element not found\n");

    // Recursive Search
    int result2 = binarySearchRecursive(arr, 0, size - 1, target);
    if (result2 != -1)
        printf("Recursive: Element found at index %d\n", result2);
    else
        printf("Recursive: Element not found\n");
    printf("\nKhushali Shandilya");
    return 0;
}
