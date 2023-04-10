#include <stdio.h>
int main(void){

    // declare variables as int to display output as integers easily
    // set space and date equal to 1 for iteration later
    int space = 1, date = 1, day, ndays;

    // prompt the user to enter the number of days in the month
    printf("Enter the number of days in the month: ");

    // store user input to variable ndays
    scanf("%d", &ndays);

    // prompt the user which day of the week the month starts
    printf("\nEnter which day of the week the month starts (1 = Sun, 7 = Sat): ");

    // store user input to variable day
    scanf("%d", &day);

    // if input is incorrect for both user prompts (and operator to join both user inputs)
    if (ndays < 28 || ndays > 31 && day < 1 || day > 7)
    {
        // print error
        printf("\nError: Enter the correct number of days and which day the month starts.");
    }
    // else, input is legal, execute block
    else
    {
        // print the days of the month as the header
        printf("\n Su Mo Tu We Th Fr Sa\n");

        // for space is set to 1, if space is lesser than value of day
        for (; space < day; space++) {
            
            // print spaces
            printf("   ");

            // update value of space since block has been executed
        }
        
        // for date is set to 1, if date is lesser than or equal to value of ndays
        for (; date <= ndays; space++, date++)
        {
            // print date value
            printf("%3d", date);

            // nested if remainder of space divided by 7 is equivalent to 0,
            if (space % 7 == 0)
            {
                // print new line to start new week
                printf("\n");
            }
            // else, continue printing date
            // update values of space and date by one since blocks have been executed
        } 
    }
    
    printf("\n");

    return 0;
}
