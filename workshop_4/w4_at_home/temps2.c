#include<stdio.h>
int main()
{ 
int days;
int counter;
int invalid;
int hi[10];
int low[10];
int max=0;
int min=40;
int max_day;
int min_day;
int num;
int sum=0;
int total;
double average;
printf("---=== IPC Temperature Calculator V2.0 ===---\n");
printf("Please enter the number of days, between 3 and 10, inclusive: ");
	  scanf("%d",&days);
 do{
 
	  
 	  
	  if(days<=10&&days>=3)
	  {
	 	
		invalid=1;
    	}
	 else
	  {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d",&days);
		invalid=0;
	  }  
  }while(!invalid);
  printf("\n");
  for(counter=0;counter<days;counter++)
  {
  	
    printf("Day %d - High: ",counter+1);
  	scanf("%d",&hi[counter]);
  	printf("Day %d - Low: ",counter+1);
  	scanf("%d",&low[counter]);
  	if(max<hi[counter])
  	{
	 max=hi[counter];
	 max_day=counter;
	 
	}
	if(min>low[counter])
	{
		min=low[counter];
		min_day=counter;
	}
	
  	
  }
  printf("\nDay  Hi  Low");
  for(counter=0;counter<days;counter++)
  {
  	printf("\n%d    %d    %d",counter+1,hi[counter],low[counter]);
  }

printf("\n\nThe highest temperature was %d, on day %d\n",max,max_day+1);
printf("The lowest temperature was %d, on day %d\n\n",min,min_day+1);

printf("Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d",&num);
do{
		
	if(num>=1&&num<=4)
	{
	    for(counter=0;counter<num;counter++)
	    {
	        total=hi[counter]+low[counter];
	        sum+=total;
        }
        average=(double)sum/(num*2);
        
        sum=0;
        total=0;
        printf("\nThe average temperature up to day %d is: %.2lf",num,average);
        
        printf("\n\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	    scanf("%d",&num);
    }
	else
	{ if(num<0)
	    {
	        break;
        }
        else{
        
	    printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
	    scanf("%d",&num);}
    }
	
  }while(num>0);
  printf("\nGoodbye!\n");
  
return 0;
}
