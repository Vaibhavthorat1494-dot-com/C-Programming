# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : SquareMeter
//  Output          : Double  
//  Description     : Accept the number from user and print 
//                    the Circle Area
//  Input           : Integer     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double Square = iNo * 0.0929;
    return Square;

}  
int main()
{
    int iValue = 0.0f;
    double dRet = 0;
    printf("Enter the Radius :\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    
    printf("SquareMeter is :%lf\n",dRet);
    return EXIT_SUCCESS;
}