# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : CountSmall
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Count Small Character  .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int CountSmall(  char * str)
{
    int i = 0;
   int iCnt = 0 ;

   while( str[i] != '\0')
   {
        if(str[i] >= 'a'    &&  str[i]<= 'z')
        {
            iCnt++;
        }
        i++;
   }
   return iCnt;   
}    
int main()
{   
    char Arr[20];
    int iRet = 0;
    
    printf("Enter the String\n");
    scanf("%[^'\n']s",&(Arr[0]));
  
    iRet = CountSmall(Arr);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}
