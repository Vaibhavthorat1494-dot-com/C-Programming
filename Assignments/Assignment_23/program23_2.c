# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : struprx
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    LowerCase String.
//  Input           : Character.      
//  Date            : 16/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////



void struprx(char * str)
{
    int i = 0;
    

    while( str[i] != '\0')
    {
        if(str[i] >= 'a'  &&  str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",&(Arr[0]));

    struprx(Arr);

    printf("Modified String is : %s\n",Arr);

    return EXIT_SUCCESS;
}