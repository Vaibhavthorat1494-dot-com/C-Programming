# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Check Voting Eligibility
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                      Eligible for voting or Not Eligible for voting
//  Input           : Integer , Integer        
//  Date            : 20/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("You are Eligible for Voting\n");
    }
    else if(iAge < 0)
    {
        printf("You have entered Invalid Age\n");
    }
    else
    {
        printf("You are Not Eligible for Voting\n");
    }
}
int main()
{
    int iAge = 0;
    printf("Enter the age : \n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}