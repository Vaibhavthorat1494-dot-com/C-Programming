# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Reverse Number
//  Input           : Integer , Integer        
//  Output          : Integer   
//  Description     : Perfroms Reverse Number from 5 to 1
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void Display()
{
    int i = 0;
    i = 5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}