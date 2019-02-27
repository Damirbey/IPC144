/* -------------------------------------------
Name:Damirkhon
Student number: 108364175
Email:dyodgorov@myseneca.ca 
Section:
Date:14.12.2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:
void display(struct Name *n, struct Address *a, struct Numbers *nu)
{
    
    printf("\nContact Details\n");
printf("---------------\n");
printf("Name Details\n");
printf("First name: %s\n",n->firstName);
printf("Middle initial(s): %s\n",n->middleInitial);
printf("Last name: %s\n\n",n->lastName);

printf("Address Details\n");
printf("Street number: %d\n",a->streetNumber);
printf("Street name: %s\n",a->street);
printf("Apartment: %d\n",a->apartmentNumber);
printf("Postal code: %s\n",a->postalCode);
printf("City: %s\n\n",a->city);

printf("Phone Numbers:\n");
printf("Cell phone number: %s\n",nu->cell);
printf("Home phone number: %s\n",nu->home);
printf("Business phone number: %s\n\n",nu->business);
}
void getName(struct Name *oname)
{
    char option;
    printf("Please enter the contact's first name: ");
scanf("%30s",oname->firstName);
printf("Do you want to enter a middle initial(s)? (y or n): ");
scanf(" %c",&option);
if(option=='y'||option=='Y')
{
    printf("Please enter the contact's middle initial(s): ");
    scanf("%6s",oname->middleInitial);
    
  }
 
      


printf("Please enter the contact's last name: ");
scanf("%s",oname->lastName);

}

// Get and store from standard input the values for Address
// Put your code here that defines the Contact getAddress function:
void getAddress(struct Address *a1)
{
    char option;
    printf("Please enter the contact's street number: ");
scanf("%d", &a1->streetNumber);
printf("Please enter the contact's street name: ");
scanf(" %40s",a1->street);
printf("Do you want to enter an apartment number? (y or n): ");
scanf(" %c",&option);
if(option=='y'||option=='Y')
{
printf("Please enter the contact's apartment number: ");
scanf("%d",&a1->apartmentNumber);
}
printf("Please enter the contact's postal code: ");
scanf(" %[^\n]",a1->postalCode);
printf("Please enter the contact's city: ");
scanf(" %40s",a1->city);

}



// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers * n1)
{
    char option;
    printf("Do you want to enter a cell phone number? (y or n): ");
scanf(" %c",&option);
if(option=='y'||option=='Y')
{
 printf("Please enter the contact's cell phone number: ");
 scanf("%20s",n1->cell);
  }  
  
printf("Do you want to enter a home phone number? (y or n): ");
scanf(" %c",&option);
if(option=='y'||option=='Y')
{
   printf("Please enter the contact's home phone number: ");
 scanf("%20s",n1->home); 
}

printf("Do you want to enter a business phone number? (y or n): ");
scanf(" %c",&option);
if(option=='y'||option=='Y')
{
   printf("Please enter the contact's business phone number: ");
 scanf("%20s",n1->business); 
}
    
}


