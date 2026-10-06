#include <stdio.h>

int main() {
    int a[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Not Found\n");
    }

    return 0;
}
