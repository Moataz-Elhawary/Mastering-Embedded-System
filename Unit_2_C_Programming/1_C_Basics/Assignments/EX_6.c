/*
 ======================================================================================================================
 Name           : EX_6.c
 Author         : Moataz Elhawary
 Created on	    : Dec 17, 2023
 ======================================================================================================================
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,temp;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\r\nAfter swapping, value of a = %d\r\nAfter swapping, value of b = %d ",a,b);
    return 0;
}
