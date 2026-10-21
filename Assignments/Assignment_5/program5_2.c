# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Check Leap Year
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                    the Leap year   
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void CheckLeapYear(int iNo)
{
    if(iNo % 400 == 0 || (iNo % 4 == 0 && iNo % 100 != 0) )
    {
        printf("It is a Leap Year :\n");
    }
    else
    {
        printf("It is Not a Leap Year:\n");
    }
}
int main()
{
    int iYear = 0;
    
    printf("Enter Year :\n");
    scanf("%d",&(iYear));

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}