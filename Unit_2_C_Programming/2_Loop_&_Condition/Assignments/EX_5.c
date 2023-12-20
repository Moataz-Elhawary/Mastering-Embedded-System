/*
 ======================================================================================================================
 Name                    	: Write C Program to Check Whether a Character is an Alphabet or not.
 ----------------------------------------------------------------------------------------------------------------------
 Author                  	: Moataz Elhawary
 ----------------------------------------------------------------------------------------------------------------------
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/


#include <stdio.h>

int main()
{
    char ch ;
    while(1)
    {
        // Input a Character from user to check
        printf("Enter a character :  ");

        scanf(" %c",&ch);  // Note the space before %c to consume any leading whitespace

        if(ch>'a'&&ch<'z' || ch>'A'&&ch<'Z')
        {
            printf("%c Is an Alphabet \n",ch);
        }
        else
        {
            printf("%c Is not an alphabet \n",ch);
        }

        printf("================================================\r\n");

    }
    return 0;
}
