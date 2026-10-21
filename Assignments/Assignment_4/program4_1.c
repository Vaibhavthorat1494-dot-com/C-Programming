# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Positive or Negative
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                    whether it is positive or negative
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is Positive Number\n",iNo);
    }
    else if(iNo < 0)
    {
        printf("%d is Negative Number\n",iNo);
    }
    else
    {
        printf("You have entered Zero\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    return EXIT_SUCCESS;
}