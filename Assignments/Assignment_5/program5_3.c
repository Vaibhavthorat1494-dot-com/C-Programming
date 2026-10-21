# include<stdio.h>
# include<stdlib.h>
//////////////////////////////////////////////////
//
//  Function NAme   : Calculate Student grade
//  Output          : Integer   
//  Description     : Accept the number from user and print 
//                    Result of Student 
//  Input           : Integer , Integer        
//  Date            : 21/10/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplayGrade(float fResult)
{
    if(fResult >=90 && fResult <=100)
    {
        printf("Grade is : A\n");
    }
    else if(fResult >= 75 && fResult <= 89)
    {
        printf("Grade is : B\n");
    }
    else if(fResult >= 60 && fResult <= 74)
    {
        printf("Grade is : C\n");
    }
    else if(fResult >= 40 && fResult <= 59)
    {
        printf("Grade is : D\n");
    }
    else
    {
        printf("Fail\n");
    }

}
int main()
{
    float fMarks = 0;

    printf("Enter Your Marks\n");
    scanf("%f",&(fMarks));

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}