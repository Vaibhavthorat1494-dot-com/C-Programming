# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : OddDisplay
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Odd Number 
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if((iCnt%2) !=0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{

    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    return EXIT_SUCCESS;
}