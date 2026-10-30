# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Factorial
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Factorial of that Number
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int factorial(int iNo)
{
    int iCnt =0;
    int iFactorial = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo;iCnt++)
    {
        iFactorial = iFactorial * iCnt;
    }
    return iFactorial;
}
int main()
{
    int iValue = 0;
    int iRet = 00;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = factorial(iValue);
    printf("Factorial of the Number is :%d\n",iRet);

    return EXIT_SUCCESS;
}