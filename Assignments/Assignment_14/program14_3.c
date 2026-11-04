# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : NonFact
//  Output          : Integer
//  Description     : Accept the Number from user and print the
//                    Non factors of number
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = 1; iCount<= iNo; iCount++)
    {
        if(iNo % iCount !=0)
        {
            printf("%d\n",iCount);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}