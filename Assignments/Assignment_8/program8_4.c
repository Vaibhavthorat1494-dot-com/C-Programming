# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Table
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Table
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=10 ; iCnt++)
    {
        printf("%d\n",iNo * iCnt);
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);
    
    return EXIT_SUCCESS;
}