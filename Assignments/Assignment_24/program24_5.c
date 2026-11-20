# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : StrRevX
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    String in Reverse.
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void StrRevX( char * str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    while(i>=0)
    {
        printf("%c",str[i]);
        i--;
    }
    
    printf("\n");
    
}    
int main()
{
    char Arr[20];

    printf("Enter the string\n");
    scanf("%19[^'\n']",&(Arr[0]));

    StrRevX(Arr);

    return EXIT_SUCCESS;
}