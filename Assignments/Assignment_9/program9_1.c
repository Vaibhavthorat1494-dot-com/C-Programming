# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : Display
//  Output          : Pattern  
//  Description     : Accept the number from user and print 
//                    the Patterns
//  Input           : Character     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        printf("*\t"); 
    }
    for(iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        printf("#\t");   
    }  
    printf("\n");
}
int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return EXIT_SUCCESS;
}