/*
 ==================================================================================================================================
 Name                    	: Write C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case.
 ----------------------------------------------------------------------------------------------------------------------------------
 Author                  	: Moataz Elhawary
 ----------------------------------------------------------------------------------------------------------------------------------
 Created on	          	: Dec 20, 2023
 ==================================================================================================================================
*/


#include <stdio.h>

int main()
{
    int num1, num2, Result;
    char Operator ;

    while(1)
    {
        // Input a Number from user
        printf("Enter a First Number :  ");
        scanf("%d",&num1);

        printf("Enter Enter operator either (+) or (-) or (*) or (/)  : ");
        scanf(" %c",&Operator);

        printf("Enter a Second Number :  ");
        scanf("%d",&num2);

        switch(Operator)
        {
        case '+':
            Result = num1 + num2 ;
            break ;
        case '-':
            Result = num1 -num2 ;
            break ;
        case '*' :
            Result = num1 * num2 ;
            break ;
        case '/' :
            if(num2!=0)
            {
                Result = num1 / num2 ;

            }
            else
            {
                printf("Error! : Division by zero is not allowed.\n") ;
                return 0 ;
            }
            break ;
        default :
            printf("Error! : Invalid operator.\n") ;
            return 0;
        }
        printf("Result = %d \n",Result);

        printf("================================================\r\n");

    }
    return 0;
}
