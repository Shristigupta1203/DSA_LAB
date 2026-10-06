#include <stdio.h>

int main() {
    int a[100], n, i, pos, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &x);

    printf("Enter index: ");
    scanf("%d", &pos);

    // Elements ko right shift karna
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++; // Array size badhana

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
