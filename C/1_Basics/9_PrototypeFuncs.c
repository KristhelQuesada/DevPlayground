/*
 * =======================================================================
 *                           PROTOTYPE FUNCTIONS
 * =======================================================================
 *
 * - General Explanation:
 *   In the past example, if we had written the function's declarations at
 *   the end of the main() functions, we would've gotten several warnings
 *   tellings us about implicit declarations. That means that when the
 *   compiler runs the main first and reach those functions, he doesn't
 *   know who are they or what they do. They're warnings, not errors but
 *   some unexpected behaviour can occur.
 *   So if you don't want to write your functions before the main function,
 *   the solution is to use prototypes or headers, and do the initialization
 *   after the main function.
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

// Prototypes or headers
void function1();
void function2(int a, float b);
int function3(int x);


int main(int argc, char* argv[]) {
    int v1;
    int v2 = 10;

    function1();
    function2(3, 4.5);
    v1 = function3(v2);

    printf("\n------- RESULTS A -------\n");
    printf("The value of v1 is: %d\n", v1);
    printf("The value of v2 is: %d\n", v2);



    return 0;
}

// 1. Void function, no parameters
void function1() {
    printf("We are in the function1 scope\n");
}

// 2. Void function, with parameters by value
void function2(int a, float b) {
    printf("We are in the function2 scope\n");
    printf("a = %d, b = %.2f\n", a , b);
}

// 3. Int function, with parameters and return
int function3(int x) {
    printf("We are in the function3 scope\n");
    x = x+2;
    int y = x;

    return y;   // If we define a type, we must return it
}