# include <stdio.h>
# include <stdlib.h>    

//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Integer
//  Description     : Accept the Row and Column  from user and print the
//                    Pattern.
//  Input           : Integer,Integer        
//  Date            : 13/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1; j<= iCol ; j++)
        {
            if( i <= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n\n\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter Number of Rows and Columns\n");
    scanf("%d%d", &iValue1 , &iValue2);

    Pattern(iValue1 , iValue2);

    return EXIT_SUCCESS;
}