#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
 
    char name[30];
    int age;
    int salary;
    int phoneno[10];
 
} Employee;
 
int main()
{
    int i, n=20;
 
    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {
 
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("phoneno: ");
        scanf("%d",employees[i].phoneno);
        printf("age: ");
        scanf("%d",&employees[i].age);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
 
    printf("Name \t\t age\tphone number\t salary \n");
 
    for(i=0; i<n; i++)
 
     {   printf("%s \t\t\ ",employees[i].name);
        printf("%d \t",employees[i].age);
        printf("%d \t",employees[i].phoneno); 
        printf("%d \t",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
