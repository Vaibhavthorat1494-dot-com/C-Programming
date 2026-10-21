# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : Factors of Number
//  Output          : Integer   
//  Description     : Accept the number from user 
//                    and print Factors of that number
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);;
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    DisplayFactors(iValue);
    return EXIT_SUCCESS;
}