# include<stdio.h>
# include <stdlib.h>

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