# include<stdio.h>
# include <stdlib.h>
# include <stdbool.h>

//////////////////////////////////////////////////
//
//  Function NAme   : ChkZero
//  Output          : Boolean  
//  Description     : Accept the two numbers from user and print 
//                    the display it contains 0 or Not.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = false;
    if(iNo < 0)
    {
        iNo =  -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = true;
            break;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == true)
    {
        printf("The Number contains Zero\n");
    }
    else
    {
        printf("The Number does not contain Zero\n");
    }
    return EXIT_SUCCESS;
}