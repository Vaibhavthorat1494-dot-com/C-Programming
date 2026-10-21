# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Admission Eligibility
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                  the eligibility of Admission
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////
void CheckAdmission(float fNo,int iAge)
{
    if(fNo >=75 && iAge >= 17)
    {
        printf("Eligible For Admission \n");
    }
    else 
    {
        printf("Not Eligible");
    }

}
int main()
{
    float fMarks = 0.0f;
    int Age = 0;

    printf("Enter your Marks \n");
    scanf("%f",&fMarks);

    printf("Enter your Age \n");
    scanf("%d",&Age);

    CheckAdmission(fMarks,Age);
    return EXIT_SUCCESS;
}