#include <stdio.h>

#define MAX_EMPLOYEES 100

// Structure to store employee details
typedef struct {
    char name[50];
    int id;
    int daysWorked;
    float dailyWage;
    float totalSalary;
} Employee;

int main() {
    int n;
    Employee employees[MAX_EMPLOYEES];
    
    // Input number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^"]s", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Days Worked: ");
        scanf("%d", &employees[i].daysWorked);
        printf("Daily Wage: ");
        scanf("%f", &employees[i].dailyWage);
        
        // Calculate total salary
        employees[i].totalSalary = employees[i].daysWorked * employees[i].dailyWage;
    }
    
    // Display employee details with total salary
    printf("\nEmployee Attendance and Salary Details:\n");
    printf("--------------------------------------------------\n");
    printf("%-5s %-20s %-10s %-12s %-12s\n", "ID", "Name", "Days Worked", "Daily Wage", "Total Salary");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10d %-12.2f %-12.2f\n", employees[i].id, employees[i].name, employees[i].daysWorked, employees[i].dailyWage, employees[i].totalSalary);
    }
    
    return 0;
}
