# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : Pattern
//  Output          : Character
//  Description     : Accept the Row and Column  from user and print the
//                    Pattern.
//  Input           : Integer,Integer        
//  Date            : 07/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
   for(i = 1; i <= iRow; i++)
   {
       for(j = 1,ch = 'A'; j <= iCol; j++)
       {
           printf("%c\t", ch);
           ch++;
       }
       printf("\n");
   }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Rows and Columns: ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}