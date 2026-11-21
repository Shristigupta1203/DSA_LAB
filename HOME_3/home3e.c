#include <stdio.h>

float average(int a[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum = sum + a[i];

    return (float)sum / n;
}

int aboveAvg(int a[], int n, float avg)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] > avg)
            count++;
    }

    return count;
}

int main()
{
    int a[100], n;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    avg = average(a, n);

    printf("Average = %.1f, Above = %d",
           avg, aboveAvg(a, n, avg));

    return 0;
}
