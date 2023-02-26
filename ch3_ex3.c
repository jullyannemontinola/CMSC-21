/* Adds two fractions */
#include <stdio.h>

int main(void){
    int num1, denom1, num2, denom2, result_num, result_denom;       // declare variables as integer values before use

    printf("Enter first fraction: ");       // signal the user to input values for first fraction
    scanf("%d/%d", &num1, &denom1);         // read input, take seperate values as numerator and denominator, and match it to variables

    printf("Enter second fraction: ");      // signal the user to input values for second fraction
    scanf("%d/%d", &num2, &denom2);         // read input, take seperate values as numerator and denominator, and match it to variables

    result_num = num1 * denom2 + num2 * denom1;         // assign the result of the operation of variables to variable for numerator
    result_denom = denom1 * denom2;                     // assign the result of the operation of variables to variable for denominator

    printf("The sum is %d/%d\n", result_num, result_denom);          // use conversion specifications to print values of variables, provide variables as arguments to match
    return 0;
}

