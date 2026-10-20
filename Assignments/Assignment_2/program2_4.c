# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Accept and Display
//  Output          : Integer   
//  Description     : Accept two number from user and Display
//                       First number in second number times
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iFre = 0;
    for(iFre = 1; iFre <= iFrequency; iFre++)
    {
        printf("%d\n",iNo);
    }

}
int main()
{   
    int iValue1 = 0;
    int iCount = 0;
    
    printf("Enter Number\n");
    scanf("%d",&(iValue1));

    printf("Enter Frequency:\n");
    scanf("%d",&(iCount));

    Display(iValue1,iCount);

    return EXIT_SUCCESS;
}