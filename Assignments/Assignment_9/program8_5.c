# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : TableRev
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Reverse Table
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt>=1 ; iCnt--)
    {
        printf("%d\n",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    TableRev(iValue);
    
    return EXIT_SUCCESS;
}