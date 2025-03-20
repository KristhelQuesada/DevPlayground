/*
 * =======================================================================
 *                          CLASSIC HELLO WORLD!
 * =======================================================================
 *
 * - General Explanation:
 *   Doing casting is easy, but just with one exception, passing from chars
 *   to integers. For that we need to use a function called atoi() otherwise
 *   we'll be working with the ASCII value.
 * 
 * - Important Questions:
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>
#include <stdlib.h>             // Because we'll be using atoi()

int main(int argc, char* argv[]) {
    int a = 5;
    int b = 2;

    // Integer division
    /*
     * The compiler will do the operation little by little. Fisrt he'll see
     * it has an integer, a division and an integer again, so it concludes
     * the result cannot other than an integer. However, like we used the
     * float flag, the integer result will be expresed as a float
    */
    float c = a / b;

    // If one of the arguments is float, the result will be float too
    /*
     * DOing casting is easy like we said, to do so it is enough to cast
     * only one variable using 
     *                (type) <variable we want to cast>
     * This is because what goes underneath is
     *                  float / int = float
     * because we can't allow us to lose precision, so the compiler always 
     * takes the one with bigger pricision
    */
    float d = (float)a / b;

    // Printing the results
    printf("No casting: %.2f\n", c);        
    printf("With casting: %.2f\n", d);

    // If we want to convert characters then
    char num = '5';                             // Notice that char is just that, ONE character. We use single upper commas here
    char* string = "1234";                      // This is when we want more than one char, we use double upper commas for this one

    int numInt = atoi(&num);                    // accesing the value of the memory RAM position
    printf("num como entero es %d\n", numInt);

    return 0;
}