//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, pos = 0; 

    // Reading 5 students' data
    for(i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    // Finding student with highest marks
    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[pos].marks) {
            pos = i;   // update position of highest marks
        }
    }

    // Printing student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", s[pos].name);
    printf("Roll No: %d\n", s[pos].roll_no);
    printf("Marks: %.2f\n", s[pos].marks);

    return 0;
}
