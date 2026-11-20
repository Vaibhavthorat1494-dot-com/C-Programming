# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : FirstChar
//  Output          : Character
//  Description     : Accept the String from user and print the
//                    Character Index Number .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int FirstChar( char * str , char ch)
{
    int i = 0;
    int iCount = 0;
     
     while (str[i] != '\0')
    {
        if( str[i] == ch)
        {
            iCount = i ;
        }
        else if(str[i] || str[i]    == ch )
        {
            iCount = 0 ;
        }
        else 
        {
            iCount = -1;
        }
        i++;
    }

return iCount;
}    
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
    
    printf("Enter the string\n");
    scanf("%19[^'\n']",&(Arr[0]));

    printf("Enter the Character\n");
    scanf(" %c",&(cValue));

    printf("String is :%s\n",Arr);
    printf("Character is : %c\n",cValue);

    iRet = FirstChar(Arr , cValue);

    printf("Character Frequency is %d \n",iRet);

    return EXIT_SUCCESS;
}
