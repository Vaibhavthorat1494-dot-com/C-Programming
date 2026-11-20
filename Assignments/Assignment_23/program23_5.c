# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : CountWhite
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Count of WideSpaces .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void CountWhite( char * str)
{
    int i = 0;
    int iCount = 0;

    while (str[i] != '\0')
    {
        if( str[i] == ' ')
        {
            iCount++;
        }
        i++;
    }
    printf("%d\n",iCount);
}    
int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%19[^'\n']",&(Arr[0]));

    CountWhite(Arr);

    return EXIT_SUCCESS;
}