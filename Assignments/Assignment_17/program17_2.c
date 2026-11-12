# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Integer
//  Description     : Accept the Row and Column  from user and print the
//                    Pattern.
//  Input           : Integer,Integer        
//  Date            : 12/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i  = 0 , j = 0 ,Num1 = 1, Num2 = 2;
    for(i = 1; i<= iRow; i++)
    {
         
        if(i % 2 == 0 )
        {
            for(j = 1 ; j <= iCol; j++)
            {
                printf("%d\t",Num1);
                Num1 = Num1 + 2;
            }   
            Num1= 1;
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t",Num2);
                Num2 = Num2 + 2;
            }
            Num2 = 2;
        }
        printf("\n");        
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Rows And Columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
