#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int arr[100], n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete (0-based index): ");
    scanf("%d", &pos);

    deleteElement(arr, &n, pos);

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nKhushali Shandilya");
    printf("\n28572");
    return 0;
}
