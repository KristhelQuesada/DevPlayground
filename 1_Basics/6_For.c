/*
 * =======================================================================
 *                             FOR SINTAXIS
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
    printf("------------- Using the For -------------\n");
    // Declare two integer variables
    int i, num;

    // Read a number from stdio and stores its value in num
    printf("Escriba un numero: ");
    scanf("%d", &num);

    // Iters from i=0 to i<num, and between each iteration
    // it adds 1 to i (i=i+1 | i++)
    // for (initial condition; execution condition; counter modifier)
    for (i=0; i<num; i++) {
        // Must be at the beggining to make sense (ITC), and basically
        // just skips whatever it's below, and jumps right to the next
        // iteration
        if (i == 3) continue;

        printf("i is %d\n", i);

        // It could be anyware, depends on the necessity and basically
        // stops the cycle no matter if the stop condition was met or
        // not
        if (i > 7) break;
    }

    // Let's dig into the ++x and x++ notation
    printf("\n\n------------- Using the ++ -------------\n");
    int x, y;
    int z = 0;

    // x is going to be equal to the initial value of z, then we add the 1
    // In other words, we add 1 to z but not to x. X will store the initial
    // value of x
    printf("Initial Z: %d\n", z);
    x = z++;
    printf("X is %d\nY is %d\nZ is %d\n", x, y, z);

    // y is going to be equal to the value of z with 1 added pre-print
    // In other words, we add 1 to z and also to y
    printf("\nInitial Z: %d\n", z);
    x = z++;    // x=z=1 and z=z+1=1+1=2
    y = ++z;    // y=z+1=2+1+3 and z=z+1=2+1=3

    printf("X is %d\nY is %d\nZ is %d\n", x, y, z);

    // It'll all has to do with the associativity

    return 0;
}