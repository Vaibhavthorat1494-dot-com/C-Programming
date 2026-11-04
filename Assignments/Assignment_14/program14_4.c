# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : SumNonFact
//  Output          : Integer
//  Description     : Accept the Number from user and print the
//                    Sumation of All  Non factors of Number.
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCount = 0;
    int iSum = 0;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    for(iCount = 1; iCount<=iNo;iCount++)
    {
        if(iNo % iCount != 0)
        {
            iSum = iSum + iCount;
        }
    }
return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}
