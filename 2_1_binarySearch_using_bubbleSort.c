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

int binarySearch(int arr[], int size, int num)
{
    int mid;
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == num)
            return mid;
        else if (arr[mid] < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main()
{
    int size, num, i;

    printf("Enter the size of the Array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the Array: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Before Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    bubbleSort(arr, size);

    printf("\nAfter  Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\nEnter the number you want to search: ");
    scanf("%d", &num);

    int result = binarySearch(arr, size, num);

    if (result != -1)
        printf("%d is found at index %d\n", num, result);
    else
        printf("Not found in the list\n");
    return 0;
}
