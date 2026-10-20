# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Divisible by 5 or not
//  Input           : Integer , Integer        
//  Output          : Integer   
//  Description     : Checks if a number is divisible by 5
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL check(int iNo)
{
    if(iNo % 5 == 0)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0; 
    int ret = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    ret = check(iValue);
    if (ret == TRUE)
    {
        printf("Divisible by 5\n");


    }
    else 
    {
        printf("Not Divisible By 5\n");
    }

    return EXIT_SUCCESS;
}