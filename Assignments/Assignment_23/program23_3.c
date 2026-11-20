# include <stdio.h>
# include <stdlib.h>


//////////////////////////////////////////////////
//
//  Function Name   : strtogglex
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Upper and Lower Case String.
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////


void strtogglex(char  * str)
{
    int i = 0 ;

    while(str[i] != '\0')
    {
        if( str[i] >= 'A'   &&  str[i]   <=  'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a'   &&     str[i] <= 'z')
        {
            str[i]  =  str[i] - 32;
        }
        
        i++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter The String\n");
    scanf("%[^'\n']s",&(Arr));

    strtogglex(Arr);

    printf("Modified String is : %s\n",Arr);

    return EXIT_SUCCESS;
}