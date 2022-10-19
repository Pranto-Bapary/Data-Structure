#include <stdio.h>
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
        else if (arr[mid] > num)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
int main()
{
    int size, num, i;

    printf("\n-------------------\n");
    printf("-  Binary Search  -\n");
    printf("-------------------\n");

    printf("Enter the number of elements : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements in ascending order : ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number you want to search : ");
    scanf("%d", &num);

    int result = binarySearch(arr, size, num); // time complexity O(logN)

    if (result != -1)
        printf("Number %d is found at index no %d\n", num, result);
    else
        printf("Not found in the list\n");
    return 0;
}