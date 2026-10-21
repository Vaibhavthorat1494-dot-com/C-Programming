# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Identify Character Type
//  Output          : Character   
//  Description     : Accept the number from user and print 
//                  the Character Type
//  Input           : Character , Integer     
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void CheckCharacterType(char cNo)
{
    if(cNo >= 'A' && cNo <= 'Z' )
    {
        printf("Upper Case\n");
    }
    else if(cNo >= 'a' && cNo <= 'z' )
    {
        printf("Lower Case\n");
    }
    else if(cNo >= '0' && cNo <= '9' )
    {
        printf("Digit\n ");
    }
    else 
    {
        printf("Special Character \n");
    }

}
int main()
{
    char cValue = '\0';

    printf("Enter the Character \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}