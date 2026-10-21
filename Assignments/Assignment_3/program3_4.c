# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : convert it to lowercase or uppercase Character
//  Output          : Character
//  Description     : Accept the character from user 
//                    and convert it to lowercase or uppercase
//  Input           : Character        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n",cValue + 32);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue - 32);
    }
    else
    {
        printf("Invalid Character\n");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);    
    DisplayConvert(cValue);
    return EXIT_SUCCESS;
}