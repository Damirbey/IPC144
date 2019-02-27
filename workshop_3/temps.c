/*
name: Damirkhon Yodgorov
student id: 108364175
*/

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 3
#include<stdio.h>
int main(void)
{
	int i = 1;
	int high;
	int low;
	int total = 0;
	int invalid;
	double average;
	printf("---=== IPC Temperature Analyzer ===---\n");
	for (i = 1; i <= NUMS; i++)
	{
		do {
            
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
			}
			else
			{
				invalid = 1;
				
				printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
				printf("\n");
				
			}
		} while (invalid);

		
	}
	average = (double)total / 6;
	printf("The average (mean) temperature was: %.2lf\n", average);
	
	return 0;

}
