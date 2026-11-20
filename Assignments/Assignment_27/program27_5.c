# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : Reverse
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Reverse Order.
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


void Reverse(char * str)
{
    int i = 0;

    while(str[i] != '\0')
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

    printf("Enter the String \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return EXIT_SUCCESS;
}