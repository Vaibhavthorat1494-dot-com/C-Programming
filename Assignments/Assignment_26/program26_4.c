# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL ;


//////////////////////////////////////////////////
//
//  Function Name   : ChkSpecial
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Special Character is or Not .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkSpecial(  char ch)
{
   
    while ( ch != '\0')
    {
        if( ch == '!' ||    ch == '@' ||     ch == '#' ||    ch == '$' ||    ch == '%' ||    ch == '^' ||    ch == '&' ||    ch == '*' )
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE )
    {
        printf("It is Special Character \n");
    }
    else
    {
        printf("It is Not Special Character\n");
    }


    return EXIT_SUCCESS;
}
