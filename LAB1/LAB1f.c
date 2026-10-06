#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, topper = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student details:\n");
    for (i = 0; i < n; i++) {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i; // Topper ka index update karna
        }
    }

    printf("\nTopper: %s\n", s[topper].name);
    printf("(%.1f)\n", s[topper].marks);

    return 0;
}
