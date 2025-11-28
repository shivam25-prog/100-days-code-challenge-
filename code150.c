//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee emp;              // normal structure variable
    struct Employee *ptr = &emp;      // pointer to structure

    // enter details using pointer and -> operator
    printf("Enter employee name: ");
    scanf("%s", ptr->name);

    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);

    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);

    // modify salary using pointer before printing (example)
    ptr->salary = ptr->salary + 1000; // increase salary by 1000

    // display using -> operator
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", ptr->name);
    printf("ID     : %d\n", ptr->id);
    printf("Salary : %.2f\n", ptr->salary);

    return 0;
}
