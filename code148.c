//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

// Define a sample struct
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to check if two students are identical
int areIdentical(struct Student s1, struct Student s2) {
    if (s1.id != s2.id) return 0;
    if (strcmp(s1.name, s2.name) != 0) return 0;
    if (s1.marks != s2.marks) return 0;
    return 1; // All fields are identical
}

int main() {
    struct Student s1, s2;

    // Input first student
    printf("Enter details of first student (ID Name Marks):\n");
    scanf("%d %s %f", &s1.id, s1.name, &s1.marks);

    // Input second student
    printf("Enter details of second student (ID Name Marks):\n");
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks);

    // Compare the two structs
    if (areIdentical(s1, s2)) {
        printf("Both students are identical.\n");
    } else {
        printf("Students are not identical.\n");
    }

    return 0;
}
