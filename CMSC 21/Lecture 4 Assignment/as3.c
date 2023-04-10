#include <stdio.h>


int main(void){

    // declare i as int variable to output integer values easily
    int i;

    // set i = 1 as starting iteration
    i = 1;

    // title for while loop output
    printf("WHILE LOOP OUTPUT: \n");

    // while i is lesser than or equal to 128
    while (i <= 128) {

        // print value of i
        printf("%d ", i);

        // multiply i to 2 and assign it to variable i
        i *= 2;

        // with new value of i, check condition
        // if true, execute block
        // otherwise, stop loop
    }

    // new line to seperate while and for loop outputs
    printf("\n");

    // title for while loop output
    printf("\nFOR LOOP OUTPUT: \n");

    // for i is equal to i, condition: is i <= 128
    for (i = 1; i <= 128;)
    {
        // print value of i
        printf("%d ", i);

        // multiply i to 2 and assign it to variable i
        i *= 2;

        // with new value of i, check condition
        // if true, execute block
        // otherwise, stop loop
    }
    

    return 0;
}
