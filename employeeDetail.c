#include <stdio.h>
#include <stdlib.h>
typedef struct{

    char name[30];
    int age;
    int ph_no;
    int salary;

} Employee;
int main()
{
    int i, n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    Employee employees[n];
    //Taking each employee detail as input

    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++){

        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //age
        printf("Age: ");
        scanf("%d",&employees[i].age);
        //phone number
        printf("Phone number: ");
        scanf("%d",&employees[i].ph_no);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);

        printf("\n");
    }

    //Displaying Employee details

    printf("-------------- All Employees Details ---------------\n");

    for(i=0; i<n; i++){

        printf("Name \t: ");
        printf("%s \n",employees[i].name);

        printf("Age \t: ");
        printf("%d \n",employees[i].age);

        printf("Phone number \t: ");
        printf("%d \n",employees[i].ph_no);

        printf("Salary \t: ");
        printf("%d \n",employees[i].salary);

        printf("\n");
    }

    return 0;

}
