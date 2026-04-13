// Program to input and display employee details and total salary
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    double salary;
} Employee;

int main() {
    int n;
    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number\n");
        return 1;
    }
    getchar(); // consume newline

    Employee *arr = malloc(sizeof(Employee) * n);
    if (!arr) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &arr[i].id);
        getchar();
        printf("Name: ");
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("Salary: ");
        scanf("%lf", &arr[i].salary);
        getchar();
    }

    double total = 0.0;
    printf("\n%-8s %-25s %-10s\n", "ID", "Name", "Salary");
    printf("-----------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-8d %-25s %-10.2f\n", arr[i].id, arr[i].name, arr[i].salary);
        total += arr[i].salary;
    }

    printf("\nTotal Salary: %.2f\n", total);
    free(arr);
    return 0;
}
