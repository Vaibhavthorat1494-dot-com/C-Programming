# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Division
//  Input           : Integer , Integer        
//  Output          : Integer   
//  Description     : Perfroms Division
//  Date            : 18/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int Division(int iNo1,int iNo2)
{
    int iAns = 0;
    if (iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;    
}
int main()
{
    int iValue = 15 , iValue2 = 5;
    int iRet = 0;
    iRet = Division(iValue,iValue2);
    
    printf("Division is : %d\n",iRet);

    return EXIT_SUCCESS;
}