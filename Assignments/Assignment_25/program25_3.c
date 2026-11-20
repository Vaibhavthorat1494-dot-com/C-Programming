# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL ;


//////////////////////////////////////////////////
//
//  Function Name   : ChkDigit
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Capital Character is Found or Not .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkDigit(  char ch)
{
   
    while ( ch != '\0')
    {
        if( ch >= '0'   &&      ch <= '9' )
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
   
}    
int main()
{
    
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Character\n");
    scanf("%c",&(cValue));

   

    bRet = ChkDigit(cValue);

    if(bRet == TRUE )
    {
        printf("It is Digit \n");
    }
    else
    {
        printf("It is Not Digit\n");
    }


    return EXIT_SUCCESS;
}
