# include <stdio.h>
# include <stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Pattern
//  Output          : Character   
//  Description     : Accept the number from user and print 
//                    the $  and *
//  Input           : Character , Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    if (iNo <0)
    {
     iNo = -iNo;
    }

    for (iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }
      printf("\n");
    
}
int main()
{  
    int iValue = 0;
    printf("Enter the Frequency:\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    
    return EXIT_SUCCESS;
}