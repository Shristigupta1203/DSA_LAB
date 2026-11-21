#include <stdio.h>

void minMax(int a[], int n, int *mn, int *mx)
{
    *mn = a[0];
    *mx = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] < *mn)
            *mn = a[i];

        if(a[i] > *mx)
            *mx = a[i];
    }
}

int main()
{
    int a[100], n, mn, mx;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minMax(a, n, &mn, &mx);

    printf("Min = %d, Max = %d", mn, mx);

    return 0;
}
