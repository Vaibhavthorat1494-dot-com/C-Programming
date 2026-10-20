# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : Accept and Display
//  Output          : Integer   
//  Description     : Accept the number from user 
//                       and Display Even or odd
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL chkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter Number :\n");
    scanf("%d", &iValue);
    bRet = chkEven(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {               
        printf("%d is Odd Number\n",iValue);
    }
    return EXIT_SUCCESS;
}