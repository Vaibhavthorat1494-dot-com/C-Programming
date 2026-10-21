# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : Accept and Display
//  Output          : Integer   
//  Description     : Accept the number from user 
//                    and print number of even numbers
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


int PrintEven(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt * 2);
    }
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet = PrintEven(iValue);
    printf("Count of even numbers: %d\n", iRet);
    return EXIT_SUCCESS;
}