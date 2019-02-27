#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 2

struct employees //declaring the structure
{
int id;
int age;
double salary;
};
int main()
{
	struct employees emp[SIZE] = { { 0,0,0 } };
    int option;
    int i=0;//employee counter
    int counter;
    
    printf("---=== EMPLOYEE DATA ===---\n");
    do
    {
        printf("\n1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");
        scanf("%d",&option);
        
        switch(option)
        {
            case 1:
                printf("\nEMP ID  EMP AGE EMP SALARY\n");
                printf("======  ======= ==========\n");
                for(counter=0;counter<SIZE;counter++)
                {
                    printf("   %d       %d   %.2lf\n",emp[counter].id,emp[counter].age,emp[counter].salary);
                }
                break;
            case 2:
                printf("\nAdding Employee\n");
                printf("===============\n");
                if(i<SIZE)
                {
                    printf("Enter Employee ID: ");
                    scanf("%d",&emp[i].id);
                    printf("Enter Employee Age: ");
                    scanf("%d",&emp[i].age);
                    printf("Enter Employee Salary: ");
                    scanf("%lf",&emp[i].salary);
                    i++;
                }
                else
                {
                    printf("ERROR!!! Maximum Number of Employees Reached\n");
                }
                break;
            default:
                
                break;
            
        }
       
        
        
    }while(option!=0);
    printf("\nExiting Employee Data Program. Good Bye!!!\n");
    
    return 0;
}
