# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Number
//  Output          : integer  
//  Description     : Accept the number from user and print 
//                    the Range
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo>100)
    {
        printf("Greater than 100\n");
    }
    else if(iNo>=50 && iNo<=100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Smaller than 50\n");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}