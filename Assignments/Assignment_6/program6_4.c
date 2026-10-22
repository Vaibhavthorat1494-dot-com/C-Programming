# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Check triangle Validity
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the Validitiy of Triangle
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void CheckTriangle(int No1,int No2,int No3)
{
    if(No1 + No2 > No3)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle");
    }
}
int main()
{
    int Side1,Side2,Side3;

    printf("Enter three Sides\n");
    scanf("%d%d%d",&Side1,&Side2,&Side3);

    CheckTriangle(Side1,Side2,Side3);

    return EXIT_SUCCESS;
}