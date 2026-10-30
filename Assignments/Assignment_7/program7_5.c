# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : MultipleDisplay
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the First 5 Multiple Numbers
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=5 ; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
}
int main()
{
     int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}