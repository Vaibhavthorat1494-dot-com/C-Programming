# include <stdio.h>
# include <stdlib.h>




//////////////////////////////////////////////////
//
//  Function Name   : Display
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Character upper or Lower case .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Display(  char ch)
{
   
    
        if( ch >= 'A'   &&      ch <= 'Z' )
        {
            ch = ch + 32 ;
            printf("%c\n",ch);
        }
        else   if(ch >= 'a'   &&      ch <= 'z' )
        {
            ch = ch - 32 ;
            printf("%c\n",ch);
        }
        else
        {
            printf("%c\n",ch);
        }
    
   
}    
int main()
{   
    char cValue = '\0';
    
    printf("Enter the Character\n");
    scanf("%c",&(cValue));

    Display(cValue);

    return EXIT_SUCCESS;
}
