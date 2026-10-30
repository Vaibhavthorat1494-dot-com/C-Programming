# include<stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function NAme   : FhtoCs
//  Output          : Double  
//  Description     : Accept the temprature in fahrenheit from user and print 
//                    the convert into celsius
//  Input           : Float     
//  Date            : 30/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    float fAns = (fTemp - 32) * (5.0/9.0);
    return fAns;
}   
int main()
{
    float fValue = 0.0f;
    double dRet = 0;
    printf("Enter the temprature in fahrenheit :\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);
    
    printf("Temprature is %lf Degree Celsius\n",dRet);
    return EXIT_SUCCESS;
}