# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : DisplayDigit
//  Output          : Interger
//  Description     : Accept the String from user and print the
//                    Digits.
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplayDigit( char * str)
{
    int i = 0;
    int No = 0;

    while (str[i] != '\0')
    {
        if( str[i] >= '0'    &&      str[i] <= '9')
        {
            No = str[i] - '0' ;
            printf("%d\n",No);
        }
        
        i++;
    }
}    
int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%[^'\n']s",&(Arr[0]));

    DisplayDigit(Arr);

    return EXIT_SUCCESS;
}