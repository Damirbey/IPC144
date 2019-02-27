/*
name: Damirkhon Yodgorov
student id: 108364175
*/

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4
#include<stdio.h>
int main(void)
{
	int i = 1;
	int high;
	int low;
	int lowest=40;
	int highest=0;
	int total = 0;
	int invalid;
	int day_low=0;
	int day_high=0;
	
	double average;

	
	printf("---=== IPC Temperature Analyzer ===---\n");
	for (i = 1; i <= NUMS; i++)
	{
		do{
            
		 	printf("Enter the high value for day %d: ", i);
			scanf("%d", &high);
			printf("\n");
			printf("Enter the low value for day %d: ", i);
			scanf("%d", &low);
			printf("\n");
			if (high <= 40 && high > -40 && high > low)
			{
				invalid = 0;
				total += high;
				total += low;
				
				if(lowest>low)
				{
					lowest=low;
					day_low=i;
				}
				if(highest<high)
				{
					highest=high;
					day_high=i;
				}
				
			}
			else
			{
				invalid = 1;
				
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				printf("\n");
				
			}
		} while (invalid);

		
	}
	average = (double)total / 8;
	printf("The average (mean) temperature was: %.2lf\n", average);
	printf("The highest temperature was %d, on day %d\n",highest,day_high);
	printf("The lowest temperature was %d, on day %d\n",lowest,day_low);


	return 0;

}
