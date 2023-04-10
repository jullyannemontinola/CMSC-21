#include <stdio.h>


int main(void){

    // declare variables as int, set i and n equal to 0 to use for iteration later on
    int i = 0, count, n = 1;

    // prompt the user to enter the length of the table
    printf("Enter an integer as boundary of the table: ");

    // store user input to variable count
    scanf("%d", &count);

    // print titles and dividers
    printf("\n  TABLE OF POWERS OF TWO  ");
    printf("\n===========================");
    printf("\nn\t2 to the power of n");
    printf("\n===========================\n");

    // for i is lesser than or equal to count
    for (; i <= count; i++)
    {
        // if i is equivalent to 0, 
        if (i == 0)
        {
            // print n and 2 to the power of 0 result which is 1
            // n value is given by variable i
            printf("%d\t\t1\n", i);
        }
        // else, other values of n
        else
        {
            // print value of n and 2 to the power of n value
            // by multiplying n to 2 and storing it to variable n
            printf("%d\t\t%d\n", i, n *= 2);

            // update value of i since block has been executed
        }
        
    }
    
    return 0;
}
