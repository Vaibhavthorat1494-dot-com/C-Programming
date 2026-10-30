# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : CircleArea
//  Output          : Double  
//  Description     : Accept the number from user and print 
//                    the Circle Area
//  Input           : Float     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float fAns = 3.14 * fRadius * fRadius;
    return fAns;
}   
int main()
{
    float fValue = 0.0f;
    double dRet = 0;
    printf("Enter the Radius :\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    printf("Radius of circle is :%lf\n",dRet);
    return EXIT_SUCCESS;
}