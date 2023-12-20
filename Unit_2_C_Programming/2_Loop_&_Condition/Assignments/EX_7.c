/*
 ======================================================================================================================
 Name                    	: Write C Program to Find Factorial of a Number For any positive number n.
 ----------------------------------------------------------------------------------------------------------------------
 Author                  	: Moataz Elhawary
 ----------------------------------------------------------------------------------------------------------------------
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/


#include <stdio.h>

int main()
{
    int num ;
    unsigned long long Factorial=1 ;
    while(1)
    {
        // Input a Number from user
        printf("Enter a Positive Number :  ");

        scanf("%d",&num);
        if (num < 0 )
        {
            printf("Please enter a non-negative integer.\n");
            if (num == 0 || num == 1 )
            {
                return 1 ;
            }
        }
        else
        {
            for (int i =1 ; i <=num ; i++)
            {
                Factorial*= i;

            }
            printf("Factorial of %d = %llu \n",num,Factorial);
        }

        Factorial=1;
        printf("================================================\r\n");

    }
    return 0;
}
