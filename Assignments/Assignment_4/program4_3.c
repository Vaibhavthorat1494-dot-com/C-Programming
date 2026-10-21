# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Greater of Two Numbers
//  Output          : Integer   
//  Description     : Accept the number from user and print
//                      the greater one
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void FindGreater(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("%d is greater than %d\n",iNo1,iNo2);
    }
    else if(iNo1< iNo2)
    {
        printf("%d is greater than %d\n",iNo2,iNo1);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}
int main()
{
    int iFirst = 0;
    int iSecond = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iFirst);

    printf("Enter the second number : \n");
    scanf("%d",&iSecond);

    FindGreater(iFirst,iSecond);
    return EXIT_SUCCESS;
}