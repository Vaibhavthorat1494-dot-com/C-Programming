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
float Calculate(float fNo,int iNo)
{
    float fCunt = 0;
    if(iNo > 10)
    {
        fCunt = (fNo * 15/100);  
    }
    else if (iNo >=5 && iNo <= 10)
    {
        fCunt =(fNo * 10/100);    
    }
    else
    {
        fCunt =(fNo * 5/100);   
    }
    return fCunt;
}
int main()
{
    float fSalary = 0.0f;
    int iyears = 0.0f;
    float fRet = 0.0f;
    float TotalSalary = 0.0f;

    printf("Enter your Salary\n");
    scanf("%f",&fSalary);

    printf("Enter Your years in company\n");
    scanf("%d",&iyears);

    fRet = Calculate(fSalary,iyears);

    TotalSalary = fSalary + fRet;
    printf("Your Salary is %f\n",TotalSalary);
    
    return EXIT_SUCCESS;
}