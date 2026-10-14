#include <stdio.h>

int binarySearch(int a[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (a[mid] == key)
        return mid;

    if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);

    return binarySearch(a, mid + 1, high, key);
}

int main()
{
    int n, i, key, result;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, n - 1, key);

    if (result == -1)
        printf("Element not found");
    else
        printf("Element found at index: %d", result);

    return 0;
}
