/*
    step 1 :- Understand the problem statement
    step 2 :- write the algorithm
    step 3 :- Decide the programming language
    step 4 :- write the program
    step 5 :- Test the program
*/

//////////////////////////////////////////////////
//
//      step 1 :- Understand the problem statement
//                  User is going to enter any 2 integers
//                  and we have to perform Addition
//
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//
//      step 2 :- write the algorithm
/* 
        START
            Accept First number as NO 1
            Accept Second number as NO 2
            Create the variable as ANS to store the result
            Perform the addition and store into ANS
            Display the result from ANS
        END
*/
//////////////////////////////////////////////////

/////////////////////////////////////////////////
//
//      step 3 :- Decide the programming language
//              WE select C Programming
//////////////////////////////////////////////////

/////////////////////////////////////////////////
//
//      step 4 :- write the program
//  
//////////////////////////////////////////////////

# include <stdio.h>

int main()
{
    int iValue1  , iValue2  , iResult ;
    
    printf("Enter First Number :\n");
    scanf("%d",&iValue1);

    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2 ;  // Business Logic

    printf("%d\n",iResult);

    return 0;
}