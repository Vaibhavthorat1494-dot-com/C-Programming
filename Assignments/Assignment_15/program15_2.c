# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : ChkGreater
//  Output          : Character
//  Description     : Accept the Number from user and print 
//                     it is Greater or Smaller.
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
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

    printf("Please enter the number: \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else 
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}