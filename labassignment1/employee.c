/*C Program to read and print the employee details using structure and dynamic memory allocation*/
#include <stdio.h>
#include <stdlib.h>
/*structure to hold the details of an employee*/
typedef struct employee
{
    int empId;
    char Name[100];
    char Designation[100];
    char Dept[10];

}employee_t;
/* Read the employee details using scanf*/
void readData(int n, employee_t* s)
{
    if (s == NULL)
    {
       return;
    }
    printf("Enter the employeeID, Name, designation and Department of Employee %d:\n", n);
    scanf("%d", &(s->empId));
    scanf("%s", s->Name);
    scanf("%s", s->Designation);
    scanf("%s", s->Dept);    
}
/* Function to print the employee details*/
void display(int n, employee_t * s)
{
    if (s == NULL)
    {
       return;
    } 
    printf("The details of Employee %d:\n", n);
    printf("empId: %d\n", s->empId);
    printf("Name: %s\n", s->Name);
    printf("designation: %s\n", s->Designation);
    printf("Dept: %s\n", s->Dept);   
    
}

/*----------Main Program--------*/
int main()
{
    int n;
    int i;
    int j;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    printf("\n");
    employee_t* employee_p =
        (employee_t*)malloc(n * sizeof(employee_t));
    if (employee_p != NULL)
    {
        for (i= 0; i<n; i++)
        {
            readData(i+1, employee_p+i);
            printf("\n");
        }
        for (j= 0; j<n; j++)
        {
            display(j+1, (employee_p+j));
            printf("\n");
        }
    }
    free(employee_p);
    return 0;
}
