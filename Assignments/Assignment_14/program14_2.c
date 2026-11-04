# include <stdio.h>
# include <stdlib.h>
//////////////////////////////////////////////////
//
//  Function Name   : FactRev
//  Output          : Integer
//  Description     : Accept the Number from user and print the
//                    Reverse factors of number
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


void FactRev(int iNo)
{
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCount = iNo/2; iCount >= 0; iCount-- )
    {
        if(iNo % iCount == 0)
        {
            printf("%d\n",iCount);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return EXIT_SUCCESS;
}