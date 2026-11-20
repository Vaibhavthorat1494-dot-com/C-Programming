# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL ;


//////////////////////////////////////////////////
//
//  Function Name   : ChkChar
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Character is Found or Not .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkChar( char * str , char ch)
{
    int i = 0;
   

    while (str[i] != '\0')
    {
        if( str[i] == ch)
        {
            return TRUE;
        }
        
        i++;
    }
   return FALSE;
}    
int main()
{
    char Arr[20];
    char CHH = '\0';
    BOOL bRet = FALSE;


    printf("Enter the string\n");
    scanf("%19[^'\n']",&(Arr[0]));

    printf("Enter the Character\n");
    scanf(" %c",&(CHH));

    printf("String is :%s\n",Arr);
    printf("Character is : %c\n",CHH);

    bRet = ChkChar(Arr , CHH);

    if(bRet == TRUE )
    {
        printf("Charcter Found\n");
    }
    else
    {
        printf("Charcter Not Found\n");
    }


    return EXIT_SUCCESS;
}
