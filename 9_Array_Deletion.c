#include <stdio.h>
void deleteItem(int arr[], int size, int position)
{
    int i;
    for (i = position - 1; i < size - 1; i++)
        arr[i] = arr[i + 1];
    size--;

    printf("Item deleted successfully\n");
    printf("Updated Array: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[100], size, item, i, position;

    printf("------------------------\n");
    printf("-    Array Deletion    -\n");
    printf("------------------------\n");

    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    printf("Enter the elements of the Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position you want to Delete: ");
    scanf("%d", &position);

    if ((position < 0) || (position > size))
        printf("\nSorry!!!You can't delete\n");
    else
        deleteItem(arr, size, position);

    return 0;
}