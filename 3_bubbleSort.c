#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    int temp, i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int size, i;

    printf("Enter the size of the Array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the Array : ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("\n-------------------\n");
    printf("-   Bubble Sort   -\n");
    printf("-------------------\n");

    printf("Before Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    bubbleSort(arr, size);
    // time complexity O(n^2)

    printf("\nAfter Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}