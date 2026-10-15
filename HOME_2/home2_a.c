#include <stdio.h>

int countKey(int a[], int n, int key)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n, i, key, count;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    count = countKey(a, n, key);

    printf("%d appears %d times", key, count);

    return 0;
}
