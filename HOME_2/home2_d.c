#include <stdio.h>

int main()
{
    int m, n, i, j, key, found = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int a[m][n];

    printf("Enter the matrix elements:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == key)
            {
                printf("Found at row %d, col %d", i, j);
                found = 1;
                break;
            }
        }

        if (found == 1)
            break;
    }

    if (found == 0)
        printf("Not found");

    return 0;
}
