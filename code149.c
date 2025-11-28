//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    // allocate memory for structure dynamically
    struct Student *s = (struct Student *) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // input details
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // print details
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", s->name);
    printf("Roll  : %d\n", s->roll);
    printf("Marks : %.2f\n", s->marks);

    // free allocated memory
    free(s);

    return 0;
}
