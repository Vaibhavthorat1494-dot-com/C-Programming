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
    int i = 0;
    int j = 0;
    int Num = 1;

    for(i = 1 ; i<= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(Num > 9)
            {
                Num = 1;    
            }
            printf("%d\t",Num);
            Num++;
        }
        printf("\n");
    }


}

int main ()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows and Columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}