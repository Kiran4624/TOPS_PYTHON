// Write a program of structure for five employee that provides the following information print and
//display empno, empname, address and age
#include <stdio.h>

struct Employee
{
    int id, age;
    char name[30], address[30];
};

int main()
{
    
    struct Employee e;

    printf("Enter the id of the Employee: ");
    scanf("%d", &e.id);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);

    printf("Enter the address of the Employee: ");
    fgets(e.address, 30, stdin);

    
    printf("\nEmployee Details:\n");
    printf("Employee Id: %d\n", e.id);
    printf("Employee Name: %s", e.name);
     printf("Employee age: %d\n", e.age);
    printf("Employee address: %s", e.address);
      
}