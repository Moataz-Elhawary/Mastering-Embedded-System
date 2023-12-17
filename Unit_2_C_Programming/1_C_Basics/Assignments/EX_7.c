/*
 ======================================================================================================================
 Name           : EX_7.c
 Author         : Moataz Elhawary
 Created on	    : Dec 17, 2023
 ======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("\r\nAfter swapping, value of a = %d\r\nAfter swapping, value of b = %d ",a,b);
    return 0;
}
