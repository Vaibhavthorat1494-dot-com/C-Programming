# include<stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function NAme   : Count
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the display itnumbers less than 6.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


int Count(int iNo)
{
    int iCount = 0;
    int iDigit = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount ++;
        }
        iNo = iNo /10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}