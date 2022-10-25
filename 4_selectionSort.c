#include <stdio.h>
void selectionSort(int arr[], int size)
{
    int temp, min, i, j;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
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
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, size); // Time Complexity O(n^2)

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}