#include <stdio.h>

int main()
{
    int n, i, largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            secondLargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest &&
                 (secondLargest == largest || a[i] > secondLargest))
        {
            secondLargest = a[i];
        }
    }

    printf("Second largest = %d\n", secondLargest);

    return 0;
}
