# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Even or Odd
//  Output          : Integer   
//  Description     : Accept the number from user and print
//                    whether it is even or odd
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("%d is Even Number\n",iNo);
    }
    else
    {
        printf("%d is ODD Number\n",iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return EXIT_SUCCESS;
}
