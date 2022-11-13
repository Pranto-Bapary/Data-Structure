#include <stdio.h>
void countingSort(int arr[], int size)//Time Complexity O(n)
{
    int arr2[size], i, k;
    k = arr[0];

    //finding the maximum range from the input numbers
    for (i = 0; i < size; i++)
    {
        if (arr[i] > k)
            k = arr[i];
    }

    //size of count array will be range + 1 so here i wrote k = k + 1 for simplicity
    k = k + 1;
    int count[k];

    //initially set all the index of count array to 0
    for (i = 0; i < k; i++)
        count[i] = 0;

    //counting the frequency of the input numbers in counting array
    for (i = 0; i < size; i++)
        ++count[arr[i]];

    //seting the index position of the counting array numbers
    for (i = 1; i <= k; i++)
        count[i] = count[i] + count[i - 1];

    //keeping the value of the first array to the new sorted array
    for (i = size - 1; i >= 0; i--)
        arr2[--count[arr[i]]] = arr[i];

    //copying the elements from the sorted array to the original array 
    for (i = 0; i < size; i++)
        arr[i] = arr2[i];
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

    printf("\n-------------------\n");
    printf("- Counting Sort  -\n");
    printf("-------------------\n");

    printf("Before Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    countingSort(arr, size);
    // Time Complexity O(n)

    printf("\nAfter Sorting.....\n");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    return 0;
}