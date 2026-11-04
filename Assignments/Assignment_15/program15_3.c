# include <stdio.h>
# include <stdlib.h>    
typedef int BOOL;
#define TRUE 1
# define FALSE 0

//////////////////////////////////////////////////
//
//  Function Name   : ChkEqual
//  Output          : Character
//  Description     : Accept the Two Numbers from user and print 
//                    Check it is Equal or Not.
//  Input           : Integer        
//  Date            : 04/11/2026
//  Author          : Vaibhav Babasaheb Thorat
//
//////////////////////////////////////////////////

BOOL ChkEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iVlaue1= 0, iVlaue2 = 0;
    BOOL bret = FALSE;

    printf("Enter the Two numbers\n");
    scanf("%d%d",&iVlaue1,&iVlaue2);

    bret = ChkEqual(iVlaue1,iVlaue2);

    if(bret == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }


    return EXIT_SUCCESS;
}