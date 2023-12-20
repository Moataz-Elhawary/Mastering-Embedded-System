/*
 ======================================================================================================================
 Name                    	: C Program to Check Whether a Number is Even or Odd.
 Author                  	: Moataz Elhawary
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/

#include <stdio.h>

int main()
{
    int number;
    while(1)
    {


        // Input the number from the user
        printf("Enter an integer you want to check : ");
        scanf("%d", &number);

        // Check if the number is even or odd
        if (number % 2 == 0)
        {
            printf("%d is an even number.\n", number);
        }
        else
        {
            printf("%d is an odd number.\n", number);
        }
        printf("==========================================================\r\n");
    }
    return 0;
}



