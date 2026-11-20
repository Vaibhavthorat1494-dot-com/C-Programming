# include <stdio.h>
# include <stdlib.h>




//////////////////////////////////////////////////
//
//  Function Name   : Display
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Character upper to Z or Lower case resverse to a .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Display(  char ch)
{
        if(ch >= 'A' &&  ch<= 'Z')
        {
            while(ch <= 'Z')
            {
                printf("%c\t",ch);
                ch++;
            }
            }
            else if(ch >= 'a' &&  ch<= 'z')
            {
            while(ch >= 'a')
            {
                printf("%c\t",ch);
                ch--;
            }
            }
            else
            {
            return;
            }
            printf("\n");
            }    
int main()
{   
    char cValue = '\0';
    
    printf("Enter the Character\n");
    scanf("%c",&(cValue));

    Display(cValue);

    return EXIT_SUCCESS;
}
