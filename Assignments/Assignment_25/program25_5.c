# include <stdio.h>
# include <stdlib.h>



//////////////////////////////////////////////////
//
//  Function Name   : DisplaySchedule
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Exam of that Particular Division .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

void DisplaySchedule(  char ch)
{
        if(ch == 'A'   ||  ch ==  'a')
        {
            printf("Your Exam at 7.00 Am\n");
        }
        else if(ch == 'B'   || ch ==   'b')
        {
            printf("Your Exam at 8.30 Am\n");
        }
        else if(ch == 'C'   ||  ch ==  'c')
        {
            printf("Your Exam at 9.20 Am\n");
        }
        else if(ch == 'D'   || ch ==   'd')
        {
            printf("Your Exam at 10.30 Am\n");
        }
        else 
        {
            printf("Invalid Division\n");
        }
}
int main()
{
    
    char cValue = '\0';
    
    printf("Enter the Division \n");
    scanf("%c",&(cValue));

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}
