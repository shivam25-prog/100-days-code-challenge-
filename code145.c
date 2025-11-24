//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student findTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];     // returning a structure
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks of student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = findTopStudent(s, n);

    printf("\nTop Student Details:\n");
    printf("Name  : %s\n", top.name);
    printf("Roll  : %d\n", top.roll);
    printf("Marks : %.2f\n", top.marks);

    return 0;
}
