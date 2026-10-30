# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : OddFactirial
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Odd Factorial
//  Input           : integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFactorial = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFactorial = iFactorial * iCnt;
        } 
    }
    return  iFactorial;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factor is :%d\n",iRet);

    return EXIT_SUCCESS;
}