# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL ;


//////////////////////////////////////////////////
//
//  Function Name   : ChkVowel
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Checked Vowels .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkVowel(  char *    str)
{
   int i = 0;
    while ( str[i] != '\0')
    {
        if( str[i]  == 'a' ||    str[i]  == 'e' ||     str[i]  == 'i' ||    str[i]  == 'o' ||    str[i]  == 'u' 
            ||    str[i]  == 'A' ||    str[i]  == 'E' ||    str[i]  == 'O'  ||    str[i]  == 'I'||    str[i]  == 'U' )
        {
            return TRUE;
        }
        i++;
    }
   return FALSE;
}    
int main()
{
    
    char Arr [20];
    BOOL bRet = FALSE;

    printf("Enter the Character\n");
    scanf("%[^'\n']s",&(Arr[0]));

    bRet = ChkVowel(Arr);

    if(bRet == TRUE )
    {
        printf("Contains Vowels \n");
    }
    else
    {
        printf("Not Contains Vowels\n");
    }


    return EXIT_SUCCESS;
}








       