# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : CountTwo
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the display it contains 4 in it.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo =  -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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
    int bRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("The Number contains %d Fours\n", bRet);

   
    return EXIT_SUCCESS;
}