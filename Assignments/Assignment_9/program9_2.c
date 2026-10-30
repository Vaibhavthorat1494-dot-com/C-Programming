# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : DollarToINR
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Indian Rupees return to  Dollar 
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iCnt =0;
    int iCurrency = 0;
    

    for(iCnt = 1; iCnt<= iNo;iCnt++)
    {
        iCurrency = 70 * iCnt;
    }
    return iCurrency;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number of USD Dollar \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Indian Currency is :%d\n",iRet);

    return EXIT_SUCCESS;
}