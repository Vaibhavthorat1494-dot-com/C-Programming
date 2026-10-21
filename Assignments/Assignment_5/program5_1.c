# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Greatest between Three Numbers
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the greatest between three numbers
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        printf("%d is Greatest Number\n",iNo1);
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        printf("%d is Greatest Number\n",iNo2);
    }
    else
    {
        printf("%d is Greatest Number\n",iNo3);
    }
}
int main()
{
    int iFirst = 0, iSecond = 0, iThird = 0;
    printf("Enter the first number : \n");
    scanf("%d",&iFirst);            

    printf("Enter the second number : \n");
    scanf("%d",&iSecond);

    printf("Enter the third number : \n");      
    scanf("%d",&iThird);
    
    FindGreatest(iFirst,iSecond,iThird);

    return EXIT_SUCCESS;
}