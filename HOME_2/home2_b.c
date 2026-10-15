#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid, floor = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (a[mid] <= key)
        {
            floor = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (floor == -1)
        printf("none");
    else
        printf("Floor = %d", floor);

    return 0;
}
