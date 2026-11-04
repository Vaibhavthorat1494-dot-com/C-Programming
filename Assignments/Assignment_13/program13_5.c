# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function NAme   : CountDiff
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    Addition of Even and Odd numbers.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEven = iEven + iDigit;
        }
        else 
        {
            iOdd = iOdd + iDigit ;
        }
        iNo = iNo / 10;
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0; 

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}