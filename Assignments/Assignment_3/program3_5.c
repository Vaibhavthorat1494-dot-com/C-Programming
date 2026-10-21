# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : Display Vowel
//  Output          : Character
//  Description     : Accept the character from user 
//                    and display if it is a vowel
//  Input           : Character        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if((cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U') || (cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter Character\n");    
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return EXIT_SUCCESS;
}