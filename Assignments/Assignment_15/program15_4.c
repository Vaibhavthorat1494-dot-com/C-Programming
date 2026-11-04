# include <stdio.h>
# include<stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : Multiply
//  Output          : Integer
//  Description     : Accept the Three Numbers from user and print 
//                    Multiplication and if (0 * No = No).
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int Multiply(int iNo1 , int iNo2 , int iNo3 )
{
    if(iNo1 == 0)
    {
        return iNo2 * iNo3;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        return iNo3;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        return iNo2;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo2 == 0 )
    {
        return iNo1 * iNo3;
    }
    else if(iNo3 == 0 )
    {
        return iNo1 * iNo2;
    }
    else if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iValue3 = 0;
    int iRet = 0;

    printf("Please Enter the Three Numbers\n");

    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of three number is :%d\n",iRet);

    return EXIT_SUCCESS;
}