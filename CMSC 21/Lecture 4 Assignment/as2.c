#include <stdio.h>


int main(void){
    // if i is set to 0; kindly uncomment for all loops and comment i = 10 to see difference in outputs
    // int i = 0;

    // if i is set to 10
    int i = 10;

    // title for while loop output
    printf("WHILE LOOP OUTPUT: \n");

    // while i is lesser than 10; iteration is from 1 to 9
    while (i < 10)
    {
        // print value of i
        printf("%d ", i);

        // update value of i by 1
        i++;

        // with new value of i, check condition
        // if true, execute block
        // otherwise, stop loop        
    }

    // reset value of i
    // i = 0;
    i = 10;

    // title for for loop output
    printf("\n\nFOR LOOP OUTPUT: \n");

    // for i is lesser than 10; iteration is from 1 to 9
    for (; i < 10; i++)
    {
        // print value of i
        printf("%d ", i);

        // update value of i by 1 since block is executed
        // with new value of i, check condition
        // if true, execute block
        // otherwise, stop loop
    }
    
    // reset value of i
    // i = 0;
    i = 10;

    // print title for do while loop
    printf("\n\nDO WHILE LOOP OUTPUT: \n");

    // execute before checking for condition
    do
    {
        // print value of i
        printf("%d ", i);

        // update value of i by 1
        i++;

        // check condition if i is still lesser than 10
        // with new value of i, check condition
        // if true, execute block
        // otherwise, stop loop
    } while (i < 10);
    
    i = 0;

    // if i = 0:
    // OUTPUT:

    // WHILE LOOP OUTPUT: 
    // 0 1 2 3 4 5 6 7 8 9

    // FOR LOOP OUTPUT:
    // 0 1 2 3 4 5 6 7 8 9

    // DO WHILE LOOP OUTPUT:
    // 0 1 2 3 4 5 6 7 8 9


    // if i = 10:
    // OUTPUT:
    // WHILE LOOP OUTPUT: 


    // FOR LOOP OUTPUT:


    // DO WHILE LOOP OUTPUT:
    // 10
    

    return 0;
}
