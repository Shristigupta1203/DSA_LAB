#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], d[100];
    int n, i, j, temp, min;
    int bubble = 0, selection = 0, insertion = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = c[i] = d[i] = a[i];
    }

    // Bubble Sort
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(b[j] > b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                bubble++;
            }
        }
    }

    // Selection Sort
    for(i = 0; i < n-1; i++)
    {
        min = i;

        for(j = i+1; j < n; j++)
        {
            if(c[j] < c[min])
                min = j;
        }

        if(min != i)
        {
            temp = c[i];
            c[i] = c[min];
            c[min] = temp;
            selection++;
        }
    }

    // Insertion Sort (count shifts)
    for(i = 1; i < n; i++)
    {
        temp = d[i];
        j = i-1;

        while(j >= 0 && d[j] > temp)
        {
            d[j+1] = d[j];
            j--;
            insertion++;
        }

        d[j+1] = temp;
    }

    printf("Bubble: %d swaps\n", bubble);
    printf("Selection: %d swaps\n", selection);
    printf("Insertion: %d swaps\n", insertion);

    return 0;
}
