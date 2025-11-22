//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function that accepts structure as parameter
void display(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name   : %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks  : %.2f\n", s.marks);
}

int main() {
    struct Student st;

    // Reading student details
    printf("Enter name: ");
    scanf("%s", st.name);

    printf("Enter roll number: ");
    scanf("%d", &st.roll_no);

    printf("Enter marks: ");
    scanf("%f", &st.marks);

    // Call function with structure variable
    display(st);

    return 0;
}
