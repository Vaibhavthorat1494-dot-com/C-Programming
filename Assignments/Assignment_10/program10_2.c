# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : RectArea
//  Output          : Double  
//  Description     : Accept the number from user and print 
//                    the Area of rectangle
//  Input           : Float     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

double RectArea(float fwidth , float fHeight)
{
    float fAns = fwidth * fHeight;
    return fAns;
}   
int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0;
    printf("Enter the Width :\n");
    scanf("%f",&fValue1);

    printf("Enter the Height :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    
    printf("Area of Rectangle is :%lf\n",dRet);
    return EXIT_SUCCESS;
}