# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : RangeSumEven
//  Output          : Integer  
//  Description     : Accept the two numbers from user and print 
//                    the Sumation of all Even Numbers
//  Input           : Integer     
//  Date            : 31/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int RangeSumEven(int iNo1 , int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

      if(iNo1 > iNo2)
        {
        printf("Invalid Range\n");
        }
        if(iNo1 < 0 || iNo2 < 0)
    {
       printf("Invalid Range\n");
        return 0;
    }
    
    for(iCnt = iNo1 ; iCnt <= iNo2; iCnt++)
    {   
        if((iCnt%2) == 0)
        {
        iSum = iSum + iCnt;
        }
    }
    return iSum;
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

    iRet = RangeSumEven(iValue1,iValue2);
    printf("Addition is %d\n",iRet);

    return EXIT_SUCCESS;
}