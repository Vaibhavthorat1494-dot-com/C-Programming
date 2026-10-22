# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Calculate Shoping Discount
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the Calculate Shoping Discount
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
float CalculateDiscount(float fNo , float fNo1 )
{
    float fNo2 = 0;
   fNo2 = fNo - (fNo * fNo1 / 100);

   return fNo2;

}
int main()
{
    float price=0;
    float discount= 0 ;
    float finalPrice =0;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    finalPrice = CalculateDiscount(  price ,  discount );


    printf("Payable Amount= %f\n", finalPrice);

    

    return EXIT_SUCCESS;
}