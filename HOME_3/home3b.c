#include <stdio.h>

void reverse(int a[], int n)
{
    int temp;

    for(int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}

int main()
{
    int a[100], n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    reverse(a, n);

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
