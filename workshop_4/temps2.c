#include<stdio.h>
int main()
{ 
int days;
int counter;
int invalid;
int hi[10];
int low[10];
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
  
  for(counter=1;counter<=days;counter++)
  {
  	
    printf("Day %d - High: ",counter);
  	scanf("%d",&hi[counter]);
  	printf("Day %d - Low: ",counter);
  	scanf("%d",&low[counter]);
  	
  }
  printf("\nDay  Hi  Low");
  for(counter=1;counter<=days;counter++)
  {
  	printf("\n%d    %d    %d",counter,hi[counter],low[counter]);
  }

  printf("\n");
return 0;
}
