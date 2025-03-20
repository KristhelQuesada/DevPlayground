/*
 * =======================================================================
 *                           IF-SWITCH SINTAXIS
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    // Declaring variable
    int num;

    // Ask the user for info
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    // ----- IF CASE -----
    printf("Trying IF statement...\n");
    if (num == 0) {
        printf("Num is 0");
    } else if (num == 1) {
        printf("Num is 1");
    } else {
        printf("Num is not 0 or 1");
    }

    // --- SWITCH CASE ---
    // We use switch when we know that the condition is the same variable
    // but just with different values. For more complex analysis like
    // asking wether num is greater than other number, is prefereable to
    // use the IF statement. Also, using SWITCH-CASE statements in the
    // right way, is more efficient because the compiler will process it
    // in a much more optimal way than if we've used IFs.
    // The break is a MUST, otherwise all the conditions will execute.
    printf("\n\nTrying SWITCH-CASE statement...\n");
    switch (num) {
    case 0:
        printf("Num is 0\n");
        break;
    case 1:
        printf("Num is 1\n");
        break;
    default:
        printf("Num is not 0 or 1\n");
        break;
    }

    return 0;
}