# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Calculate Bill
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the Calculate the bill
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
float CalculateElectricityBill(float fNo)
{
    float fCunt = 0;
    if(fNo <= 100)
    {
        fCunt = fNo * 5 ;
        return fCunt;
    }
    else if (fNo > 100 && fNo <= 200)
    {
        fCunt = fNo * 7 ;
        return fCunt;
    }
    else
    {
        fCunt = fNo * 10 ;
        return fCunt;

    }
}
int main()
{
    float fBill = 0;
    float fRet = 0;
    printf("Enter the Electricity bill\n");
    scanf("%f",&fBill);

    fRet = CalculateElectricityBill(fBill);
     printf("Your Electricity bill is : %f\n",fRet);


    return EXIT_SUCCESS;
}