# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : FactDiff
//  Output          : Integer
//  Description     : Accept the Number from user and print the
//                    Difference of Sum of Factors and Sum of Non-Factors.
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCount = 0;
    int iEven = 0;
    int iOdd = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount < iNo ; iCount++)
    {
        if(iNo % iCount == 0)
        {
            iEven = iEven + iCount;
        }
        else 
        {
            iOdd = iOdd + iCount;
        }
    }
        return iEven - iOdd;
}

int main ()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}