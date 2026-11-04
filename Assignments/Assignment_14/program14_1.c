# include <stdio.h>
# include <stdlib.h>    

//////////////////////////////////////////////////
//
//  Function Name   : MultFact
//  Output          : Integer
//  Description     : Accept the Number from user and print the
//                    Multiplication of factors of number
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCount = 0;
    int Multi = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = 1; iCount<= iNo/2; iCount++)
    {
        if(iNo % iCount == 0)
        {
            Multi = Multi * iCount;
        }
    }
    return Multi;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}