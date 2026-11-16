# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Interger 
//  Description     : Accept the Number from user and print the
//                    Pattern.
//  Input           : Integer      
//  Date            : 16/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;
    for(i = 1 ; i<=iNo ; i++)
    {
        printf(" %d\t ", i * 2 );    
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter Number of Elements\n");
    scanf("%d",&(iValue));

    Pattern(iValue);

    return EXIT_SUCCESS;
}