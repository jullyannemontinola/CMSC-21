#include <stdio.h>
#include <stdbool.h>

// find length of array by dividing size of whole array by the size of an element in the array
#define NUM_PATHWAYS ((int) (sizeof(pathway) / sizeof(pathway[0])))

int main(){

    // declare array as bool
    // shorthand designation of values since pathway[0] and pathway[2] are the only true values
    bool pathway[8] = {[0] = true, [2] = true};
    bool pathway[8] = {[0] = 1, [2] = 1};
    bool pathway[8] = {true, false, true};
    bool pathway[8] = {1, 0, 1};
    
    // iterate through the array and check if it is lesser than length every iteration
    for (int i = 0; i < NUM_PATHWAYS; i++)
    {   
        // if pathway value evaluates to true
        if (pathway[i])
        {
            // print message that it is open
            printf("pathway[%d] is open. \n", i);
        }
        else
        {
            // otherwise pathway value evaluates to false
            // print message that it is closed
            printf("pathway[%d] is close. \n", i);
        }
        
    }
    

    return 0;
}
