# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : MultDigits
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    Multiplication of the Number.
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iDigit = 0;
    int Multi = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        Multi = Multi * iDigit;
        iNo = iNo / 10;
    }
    return Multi;
}

int main()
{
    int iValue = 0;
    int iRet = 0; 

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    iRet =MultDigits(iValue);
    printf("%d\n", iRet);

    return EXIT_SUCCESS;

}