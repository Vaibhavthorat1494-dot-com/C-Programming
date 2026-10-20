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

void Display(int iNo)
{
    
    while(0 <= iNo)
    {
        printf("*\n");
        iNo--;
    }
}  
int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}