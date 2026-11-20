# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : strlwrx
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    LowerCase String.
//  Input           : Character.      
//  Date            : 16/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


void strlwrx(char * str)
{
    int i = 0 ;
    while( str[i] != '\0')
    {
       if(  str[i] >= 'A' &&  str[i] <= 'Z' )
       {
         str[i] = str[i] + 32 ;
         printf("%s\n",str);
       }
        i++;
    }

}

int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s",&(arr[0]));

    strlwrx(arr);

    return EXIT_SUCCESS;
}