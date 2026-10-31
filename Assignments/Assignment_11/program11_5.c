# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : RangeDisplayRev
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the Sumation of all Even Numbers
//  Input           : Integer     
//  Date            : 31/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void RangeDisplayRev(int iNo1 , int iNo2)
{
    int iCnt = 0;
    

      if(iNo1 > iNo2)
        {
        printf("Invalid Range\n");
        }
    for(iCnt = iNo2 ; iCnt >= iNo1; iCnt--)
    {   
        printf("%d\n",iCnt);
    }
   
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Starting Point\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Point\n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}