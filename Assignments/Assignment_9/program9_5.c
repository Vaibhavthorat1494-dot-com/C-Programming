# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Factorialdiff
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Even Factorial
//  Input           : integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int Factorialdiff(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;
    int OFactorial = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFactorial = iFactorial * iCnt;
        } 
    }
    for(iCnt = 1;iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            OFactorial = OFactorial * iCnt;
        } 
    }
    return  iFactorial - OFactorial;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorialdiff(iValue);
    printf("Factorial Difference is :%d\n",iRet);

    return EXIT_SUCCESS;
}