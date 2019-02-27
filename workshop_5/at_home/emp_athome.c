// Name : Damirkhon Yodgorov
//student Id: 108364175
#include<stdio.h>
#define SIZE 4

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
    int id;
    double new_salary;
    
    printf("---=== EMPLOYEE DATA ===---\n");
    do
    {
        printf("\n1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");
        scanf("%d",&option);
        
        switch(option)
        {
            case 1:
                printf("\nEMP ID  EMP AGE EMP SALARY\n");
                printf("======  ======= ==========\n");
                for(counter=0;counter<SIZE;counter++)
                { if(emp[counter].id!=0)
                    {
                      if(emp[counter].salary==120345.78)
                      {
                          printf("   %d       %d  %.2lf\n",emp[counter].id,emp[counter].age,emp[counter].salary);
                      }
                      else{
                      
                    printf("   %d       %d   %.2lf\n",emp[counter].id,emp[counter].age,emp[counter].salary);}}
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
            case 3:
                printf("\nUpdate Employee Salary\n");
                printf("======================\n");
                printf("Enter Employee ID: ");
                scanf("%d",&id);
                for(counter=0;counter<SIZE;counter++)
                { if(emp[counter].id==id)
                   {
                       printf("The current salary is %.2lf\n",emp[counter].salary);
                       printf("Enter Employee New Salary: ");
                       scanf("%lf",&new_salary);
                       emp[counter].salary=new_salary;
                   }
                }
                break;
            case 4:
                printf("\nRemove Employee\n");
                printf("===============\n");
                printf("Enter Employee ID: ");
                scanf("%d",&id);
                for(counter=0;counter<SIZE;counter++)
                { if(emp[counter].id==id)
                   {
                       emp[counter].age=0;
                       emp[counter].id=0;
                       emp[counter].salary=0;
                       i--;
                       printf("Employee %d will be removed\n",id);
                   }
                
                }
                break;
            default:
                if(option!=0)
                {
                
                printf("\nERROR: Incorrect Option: Try Again\n");}
                break;
            
        }
       
        
        
    }while(option!=0);
    printf("\nExiting Employee Data Program. Good Bye!!!\n");
    
    return 0;
}
