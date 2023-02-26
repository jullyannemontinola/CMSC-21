#include <stdio.h>

int main(void){
    int i;              // declare variable as an integer value before use
    float x;            // declare variable as a float value before use
    
    i =- 40;                // assign appropriate values to variable
    x = 839.21f;            // assign appropriate values to variable, put f after float value to make it esaier for the compiler to read the value

    /* conversion specification form %m.pX where: 
    m is the number of characters to be displayed
    p i the number of digits to be displayed; dependent on conversion type
    X is the conversion type
    the negative sign at the beginning left justifies the output
    use conversion specifications to print values of variables, provide variables as arguments to match  */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);        
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);
    return 0;
}
