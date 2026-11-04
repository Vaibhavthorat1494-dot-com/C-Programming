# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : DisplayDigit
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the display the Digits in Reverse order
//  Input           : Integer     
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    while ((iNo != 0))
    {
       iDigit = iNo % 10;
       printf("%d\n",iDigit);
       iNo = iNo/10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("enter Number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}