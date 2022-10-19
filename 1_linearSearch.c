#include <stdio.h>
int linearSearch(int arr[], int size, int num)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}
int main()
{
    int size, num, i;

    printf("\n-------------------\n");
    printf("-  Linear Search  -\n");
    printf("-------------------\n");

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements : ");

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number you want to search : ");
    scanf("%d", &num);

    int result = linearSearch(arr, size, num); // time complexity O(n)

    if (result != -1)
        printf("Number %d is found at index no %d\n", num, result);
    else
        printf("Not found in the list\n");
    return 0;
}
