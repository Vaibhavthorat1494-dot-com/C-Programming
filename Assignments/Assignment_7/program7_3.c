# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Display
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the number line of that number
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt= -iNo; iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number\n") ;
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}