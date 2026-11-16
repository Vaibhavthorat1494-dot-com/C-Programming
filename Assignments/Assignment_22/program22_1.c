# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Character
//  Description     : Accept the Number from user and print the
//                    Pattern.
//  Input           : Integer      
//  Date            : 16/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iNo)
{
    int No = 0;
    char ch ='A';

    for( No = 1 ; No <= iNo ; No++)
    {
        printf("%c\t",ch);
        ch++;
    }
     printf("\n");
}
int main ()
{
    int iValue = 0 ;

    printf("Enter Number of Elements\n");
    scanf("%d",&(iValue));

    Pattern(iValue);

    return EXIT_SUCCESS;
}