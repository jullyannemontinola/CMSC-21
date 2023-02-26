#include <stdio.h>

int main(void){

    int i, j; float x, y;                                       // declare i and j as interger values, declare x and y as float values before use
    i = 10; j = 20; x = 43.2892f; y = 5527.0f;                  // assign appropriate values to variable names respectively

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);         // use conversion specifications to print values of variables, provide variables as arguments to match 
    
    // This call of printf produces the following output: = 10, j = 20, x = 43.289200, y = 5527.000000 

}