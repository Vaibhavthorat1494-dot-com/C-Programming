# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : Main
//  Output          : Character
//  Description     : Accept the Name from user and print the
//                    Name .
//  Input           : Character        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter your name: \n");
    scanf("%[^\n]s", Name);

    printf("Your Name is , %s\n", Name);

    return EXIT_SUCCESS;
}