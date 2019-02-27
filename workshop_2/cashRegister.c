
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double amount;
	double remainder;
	double quarter;
	double owing_quarter;
	double change;
	double change_loonies;
	double loonies_change;

	int converting;
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount);
	converting=amount*100;
	remainder= (int)converting%100;
	owing_quarter=(remainder/100)-0.50;
	change=amount-owing_quarter;
	quarter=change/4;
	change_loonies=remainder/100;
	loonies_change=amount-change_loonies;
	printf("Loonies required: %.0lf,",loonies_change);
	printf(" balance owing $%.2lf\n",change_loonies+0.01);
	printf("Quarters required: %.0lf,", quarter);
	printf(" balance owing $%.2lf\n",owing_quarter+0.01);

	return 0;


 }
