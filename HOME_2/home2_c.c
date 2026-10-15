#include <stdio.h>

int main()
{
    int n, i, key, linear = 0, binary = 0;
    int low, high, mid, found = 0;

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

    for (i = 0; i < n; i++)
    {
        linear++;

        if (a[i] == key)
            break;
    }

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        binary++;

        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("Linear = %d, Binary = %d\n", linear, binary);

    return 0;
}
