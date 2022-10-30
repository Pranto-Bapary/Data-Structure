#include <stdio.h>
//Time Complexity O(n^2)
void insertionSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int size, i;

    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("\n-------------------\n");
    printf("-  Insertion Sort -\n");
    printf("-------------------\n");

    printf("Before Sorting......\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    insertionSort(arr, size);

    printf("\nAfter Sorting......\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}