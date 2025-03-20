/*
 * =======================================================================
 *                           FUNCTIONS SINTAXIS
 * =======================================================================
 *
 * - General Explanation:
 *   int *punt <-> punt = arr (They're the same)
 *   to access the next element we use punt+1 because C is smart enough to
 *   identify the data type and sum according to the byte size of the data
 *   type.
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>
#include <string.h> // for strlen()

int main(int argc, char* argv[]) {
    int i;
    int arr[5] = {0};       // Initializes all its values in zero

    // Pointers
    int *punt;              // Stores the value of a memory direction


    return 0;
}