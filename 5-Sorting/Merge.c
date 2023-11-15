#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    int left[leftSize];
    int right[rightSize];

    for (int i = 0; i < leftSize; i++)
        left[i] = arr[low + i];
    for (int j = 0; j < rightSize; j++)
        right[j] = arr[mid + j + 1];

    int i = 0, j = 0, k = low;

    while (i < leftSize && j < rightSize)
    {
        if (left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }

    while (i < leftSize)
        arr[k++] = left[i++];

    while (j < rightSize)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
