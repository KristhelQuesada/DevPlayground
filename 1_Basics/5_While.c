/*
 * =======================================================================
 *                            WHILE SINTAXIS
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 *      1. What's the difference between & and *?
 *         That &x gets the memory address of x, and *y gets the value of
 *         the address y.
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int out = 0;

    printf("Let's test the WHILE first\n");
    while (out != 0) {
        printf("Escriba '0' para salir: ");

        // To input info from user we use scanf, also we must specify the
        // data type and ONLY the data type, and then the address of the
        // variable in which we'll
        // save the info received. N
        scanf("%d", &out);
    }

    // This type of while doesn't exists on Python
    // Is useful to make sure at least one iteration is done
    // For example in the normal while, if out is since the beginning then
    // that while will never execute, but the do-while will
    printf("Let's test the DO-WHILE next\n");
    do {
        printf("Escriba '0' para salir: ");
        scanf("%d", &out);
    } while (out != 0);

    return 0;
}