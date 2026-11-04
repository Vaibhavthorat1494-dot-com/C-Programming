# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : Percentage
//  Output          : Float
//  Description     : Accept the Three Numbers from user and print 
//                    Percentage.
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

float Percentage(int iNo1 , int iNo2)
{
    float fAns = 0.0f;
    fAns = (float)iNo2 / (float)iNo1 * 100.0f;
    return fAns;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 ;
    float fRet = 0.0f;

    printf("Enter the total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter the obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is : %f%%\n",fRet);

    return EXIT_SUCCESS;
}