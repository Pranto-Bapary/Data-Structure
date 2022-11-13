#include <stdio.h>
void insertItem(int arr[], int size, int item, int position)
{
    int i;
    for (i = size - 1; i >= position - 1; i--)
        arr[i + 1] = arr[i];
    arr[position - 1] = item;
    size++;

    printf("Item %d inserted successfully\n", item);
    printf("Updated Array: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[100], size, item, i, position;

    printf("------------------------\n");
    printf("-    Array Insertion   -\n");
    printf("------------------------\n");

    printf("Enter the size of the Array: ");
    scanf("%d", &size);

    printf("Enter the elements of the Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the item you want to Insert: ");
    scanf("%d", &item);

    printf("Enter the position you want to Insert: ");
    scanf("%d", &position);

    if ((position < 0) || (position > size))
        printf("Sorry!!!You can't insert\n");
    else
        insertItem(arr, size, item, position);

    return 0;
}