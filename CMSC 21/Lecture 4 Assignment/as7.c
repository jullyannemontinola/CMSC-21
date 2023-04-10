#include <stdio.h>

// macro definition for size of rows and columns of multidimensional array 
#define ROWS 9
#define COLS 9


int main(){

    // declare variables as int for operations that require int values
    // set variables to certain values for iteration and to access array values later on
    int i, loc, at_point, stationC = 2, stationD = 3;

    // declare array as char since letters are used; this is for printing labels
    char label[ROWS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};

    // declare array as int and initialize with its values
    int road_networks[ROWS][COLS] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0 ,0, 0},
        {0, 0, 0, 1, 1, 0, 0 ,0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}};


    // print the table with the adjacency matrix
    // print title
    printf("\t    Adjacency Matrix\n\n");

    // print header of table, enclose charging stations with square brackets
    printf("     A   B  [C] [D]  E   F   G   H   I  \n");

    // print new line
    printf("\n");

    // iterate from 0 to 8, for i is inside the boundary, execute block
    // this is for printing rows
    for (; i < ROWS; i++)
    {
        // since every row starts with a label, print label
        // if i is equivalent to 2 or 3
        if (i == 2 || i == 3)
        {   
            // print label inside square brackets
            printf("[%c]  ", label[i]);
        }
        // else, i is equivalent to destinations
        else
        {
            // print label
            printf(" %c   ", label[i]);
        }
        
        // after printing the label in that row
        // iterate through the column values in that row
        // iterate from 0 to 8, for j is inside the column boundary, execute block
        for (int j = 0; j < COLS; j++)
        {
            // if value in that column of row equals to one,
            if (road_networks[i][j] == 1)
            {
                // print value and spaces for organization
                printf("1   ");
            } 
            // else, value in that column of row equals to zero,
            else
            {
                // print value and spaces for organization
                printf("0   ");
            }
            // update value of j by 1, check if j value evalutes true from the condition
            // if true, keep executing block and printing values
            // otherwise, exit loop
        }

        // print new line after all values in every colum of that row has been printed
        printf("\n");

        // update value of i by 1, check if i value evaluates true from the condition
        // if true, proceed to the next row and print values
        // otherwise exit loop
    }

    // print user prompt and instructions
    printf("\n\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H, 8 - 1: \n\n");
    
    // user prompt
    printf("Location: ");

    // store user input to loc variable (short for location)
    scanf("%d", &loc);

    // print equivalent of the user input integer to the value in label array for clarification
    printf("\nAt point: %c", label[loc]);

    // iterate through the rows of road_networks array
    for (i = 0; i < ROWS; i++)
    {
        // if location is equivalent to 2,
        if (loc == 2)
        {
            // tell user that they are at charging station C
            printf("\nC is a charging station.");

            // break so it does not get printed for every iteration
            break;
        }
        // if locaion is equivalent to 3
        else if (loc == 3)
        {
            // tell user that they are at charging station D
            printf("\nD is a charging station.");

            // break so it does not get printed for every iteration 
            break;
        }
        // for the rest of the values found in row
        else if(i == loc)
        {
            // set at_point equal to i
            // iterate through the values of every column in that row
            for (at_point = i; at_point < COLS; at_point++)
            {
                // if value at that row and column of c is equivalent to 1
                if (road_networks[at_point][stationC] == 1)
                {
                    // tell user charging station c is the nearest charging station
                    printf("\nC arrived to charging station.");
                    
                    // break since value has been tested
                    break;
                }
                // if value at that row and column of d is equivalent to 1
                else if (road_networks[at_point][stationD] == 1)
                {
                    // tell user charging station d is the nearest charging station
                    printf("\nD arrived to charging station.");

                    // break since value has been tested
                    break;
                }
                // else value is not found in the matrix
                else
                {
                    continue;
                }
                
                
            }
            
        }
                
    }
    


    




    return 0;
}