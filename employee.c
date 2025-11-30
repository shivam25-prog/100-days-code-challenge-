#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
    char designation[30];
};

int main() {
    struct Employee e1 = {"Rohan", 101, 1800, "Clerk"};
    struct Employee e2 = {"Meera", 102, 2500, "HR"};
    struct Employee e3 = {"Aman", 103, 1900, "Assistant"};

    // Salary hike condition
    if (e1.salary < 2000)
        e1.salary += e1.salary * 0.10;

    if (e2.salary < 2000)
        e2.salary += e2.salary * 0.10;

    if (e3.salary < 2000)
        e3.salary += e3.salary * 0.10;

    // Print updated data
    printf("\nEmployee Details After Hike:\n");

    printf("\nName: %s\nID: %d\nSalary: %.2f\nDesignation: %s\n", 
           e1.name, e1.id, e1.salary, e1.designation);

    printf("\nName: %s\nID: %d\nSalary: %.2f\nDesignation: %s\n", 
           e2.name, e2.id, e2.salary, e2.designation);

    printf("\nName: %s\nID: %d\nSalary: %.2f\nDesignation: %s\n", 
           e3.name, e3.id, e3.salary, e3.designation);

    return 0;
}
