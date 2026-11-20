# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : DisplayASCII
//  Output          : Integer 
//  Description     : Display Ascii Table.
//  Input           : Integer.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplayASCII( int iNo)
{
    int i = 0;

    printf("Decimal\t\t\tHexadecimal\t\t\tOctal\t\t\tSymbol\n");

    for(i = 0 ; i<=127 ; i++)
    {
        printf("%d\t\t\t%X\t\t\t%o\t\t\t%c\t\t\t",i,i,i,i);
        printf("\n");
    }


}
int main()
{
    
    int No = 0;

    DisplayASCII(No);

    return EXIT_SUCCESS;
}