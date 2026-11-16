# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Interger and Character
//  Description     : Accept the Number from user and print the
//                    Pattern.
//  Input           : Integer      
//  Date            : 16/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


void Pattern(int iNo)
{
    int No = 0 ; 
   

    for(No = iNo ; No > 0 ; No--)
    {
        printf("%d\t*\t",No);
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