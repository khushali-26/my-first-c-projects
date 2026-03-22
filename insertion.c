01100#include <stdio.h>

void insertElement(int arr[], int *n, int pos, int value) {
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

int main() 
{
    int arr[100], n, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    insertElement(arr, &n, pos, value);

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nKhushali Shandilya");
    printf("\n28572");

    return 0;
}
