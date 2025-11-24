//Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <string.h>

#define FILE_NAME "employees.dat"

/* Simple Date structure */
typedef struct {
    int day;
    int month;
    int year;
} Date;

/* Employee structure with basic details */
typedef struct {
    int id;
    char name[50];
    float salary;
    Date join;
} Employee;

/* Function to save one employee record in a binary file */
void addEmployee() {

    Employee emp;
    FILE *fp = fopen(FILE_NAME, "ab"); // open in append + binary mode

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar();   // remove newline

    printf("Enter Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';   // remove newline

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &emp.join.day, &emp.join.month, &emp.join.year);

    // write one record to file
    fwrite(&emp, sizeof(Employee), 1, fp);

    printf("\n✔ Employee data saved successfully!\n");

    fclose(fp);
}

/* Function to read and display all employee records */
void readEmployees() {

    Employee emp;
    FILE *fp = fopen(FILE_NAME, "rb"); // open in read + binary mode

    if (fp == NULL) {
        printf("No employee file found.\n");
        return;
    }

    printf("\n================ Employee List ================\n");

    int count = 0;

    // read records one-by-one until end of file
    while (fread(&emp, sizeof(Employee), 1, fp)) {

        printf("\nRecord #%d\n", ++count);
        printf("ID      : %d\n", emp.id);
        printf("Name    : %s\n", emp.name);
        printf("Salary  : %.2f\n", emp.salary);
        printf("Joining : %02d-%02d-%04d\n",
               emp.join.day, emp.join.month, emp.join.year);
    }

    if (count == 0)
        printf("\n(No records found)\n");

    fclose(fp);
}

/* Main menu */
int main() {

    int choice;

    while (1) {

        printf("\n========= Employee Binary File Program =========\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addEmployee();
                break;

            case 2:
                readEmployees();
                break;

            case 3:
                printf("\nThank you! Exiting program...\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
