/*
 ======================================================================================================================
 Name                    	: Write C Program to Find the Largest Number Among Three Numbers.
 Author                  	: Moataz Elhawary
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/


#include <stdio.h>

int main()
{
    int num1, num2,num3 ;
    while(1)
    {
        // Input a Three Numbers from user
        printf("Enter Three Numbers : \n");

        scanf(" %d %d %d",&num1,&num2,&num3);  

        if(num1>num2)
        {
            if(num1>num3)
            {
                printf("Largest Number = %d \n",num1);
            }
            else
            {
                printf("Largest Number = %d \n",num3);
            }

        }
        else if(num2>num3)
        {

            printf("Largest Number = %d \n",num2);
        }
        else
        {
            printf("Largest Number = %d \r\n",num3);
        }


        printf("================================================\r\n");

    }
    return 0;
}
