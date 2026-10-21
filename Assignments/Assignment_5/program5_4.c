# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Check Divisibility by 3 and 5
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the Divisibility
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void CheckMultipleDivisibility(int iNo)
{
    if (iNo % 3 == 0 && iNo % 5 == 0 )
    {
        printf("Divsible by Both\n");
    }
    else if (iNo % 3 == 0)
    {
        printf("Divsible by 3\n");
    }
    else if (iNo % 5 == 0)
    {
        printf("Divsible by 5\n");
    }
    else 
    {
        printf("Divisible by either \n");
    }
}
int main()
{   
    int iValue = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
