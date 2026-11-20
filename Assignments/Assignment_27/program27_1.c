# include <stdio.h>
# include <stdlib.h>

//////////////////////////////////////////////////
//
//  Function Name   : CountCapital
//  Output          : Character
//  Description     : Accept the Character from user and print the
//                    Count Capital Character  .
//  Input           : Character.      
//  Date            : 20/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

int CountCapital(  char * str)
{
    int i = 0;
   int iCnt = 0 ;

   while( str[i] != '\0')
   {
        if(str[i] >= 'A'    &&  str[i]<= 'Z')
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
  
    iRet = CountCapital(Arr);

    printf("%d\n",iRet);
    

    return EXIT_SUCCESS;
}
