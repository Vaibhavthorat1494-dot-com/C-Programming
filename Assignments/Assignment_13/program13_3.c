# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : CountRange
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the display Range Between 3 and 7 numbers.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int CountRange(int iNo)
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
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;

}

int main()
{ 
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}