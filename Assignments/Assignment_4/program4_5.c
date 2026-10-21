# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Divisible by 5
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                      whether it is divisible by 5
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void CheckDivisiblity(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("%d is Divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is Not Divisible by 5\n",iNo);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);        

    CheckDivisiblity(iValue);

    return EXIT_SUCCESS;
}