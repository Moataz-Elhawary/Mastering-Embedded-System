/*
 ======================================================================================================================
 Name                    	: Write C Program to Check Whether a Number is Positive or Negative.
 Author                  	: Moataz Elhawary
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/


#include <stdio.h>

int main()
{
    float num ;
    while(1)
    {
        // Input a Number from user to check
        printf("Enter a Number : \n");

        scanf(" %f",&num);  

        if(num>0)
        {
                printf("%.3f Is Positive \n",num);
        }
        else if(num<0)
        {
                printf("%.3f Is Negative \n",num);
        }


        else
        {

            printf("You Entered ZerOOO \n");
        }



        printf("================================================\r\n");

    }
    return 0;
}
