# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL ;


//////////////////////////////////////////////////
//
//  Function Name   : ChkCapital
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Capital Character is Found or Not .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkCapital(  char ch)
{
   
    while ( ch != '\0')
    {
        if( ch >= 'A'   &&      ch <= 'Z' )
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

   

    bRet = ChkCapital(cValue);

    if(bRet == TRUE )
    {
        printf("It is Capital Charcter \n");
    }
    else
    {
        printf("It is Not  capital Charcter\n");
    }


    return EXIT_SUCCESS;
}
