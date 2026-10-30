# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : KMToMeter
//  Output          : Integer  
//  Description     : Accept the number from user and print 
//                    the Kilometer into Meter
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iAns = iNo * 1000;
    return iAns;
}   
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Radius :\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);
    
    printf("Meter is :%d\n",iRet);
    return EXIT_SUCCESS;
}