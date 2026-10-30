# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Display
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the it into Word
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }else if(iNo == 4)
    {
        printf("Four\n");
    }else if(iNo == 5)
    {
        printf("Five\n");
    }else if(iNo == 6)
    {
        printf("Six\n");
    }else if(iNo == 7)
    {
        printf("Seven\n");
    }else if(iNo == 8)
    {
        printf("Eight\n");
    }else if(iNo == 9)
    {
        printf("Nine\n");
    }else if(iNo == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Invalid Number\n");
    }


}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}