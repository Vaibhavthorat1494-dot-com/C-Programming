# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Accept and Display
//  Output          : Integer   
//  Description     : Accept the number from user and print *
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("*\n");
    }

}

int main()
{
    int iValue = 0;
   
    printf("Enter number :\n",&iValue);
    scanf("%d",&iValue);

    Accept(iValue);
    return EXIT_SUCCESS;
}