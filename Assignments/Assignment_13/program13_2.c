# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : CountOdd
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the display it contains Odd numbers.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of Odd numbers is : %d\n", iRet);

    return EXIT_SUCCESS;
}