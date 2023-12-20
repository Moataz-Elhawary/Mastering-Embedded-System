/*
 ======================================================================================================================
 Name                    	: C Program to Check Vowel or Consonant.
 Author                  	: Moataz Elhawary
 Created on	          	: Dec 20, 2023
 ======================================================================================================================
*/


#include <stdio.h>

int main()
{
    char ch;
    while(1)
    {
        // Input a character from the user
        printf("Enter an alphabet : ");

        scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

        // Check if the character is a vowel or a consonant
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            // The character is an alphabet
            switch (ch)
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
            }
        }
        else
        {
            // The character is not an alphabet
            printf("Invalid input. Please enter an alphabet.\n");
        }
        printf("================================================\r\n");

    }
    return 0;
}