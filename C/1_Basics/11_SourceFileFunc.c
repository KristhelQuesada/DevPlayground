/*
 * =======================================================================
 *                           FUNCTIONS SINTAXIS
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc -I ./ 11_SourceFileFunc.c -o exe
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
 *    >> -I is the include directory flag that tells the compiler to
 *       look in the paths specified in <relative paths> (./ means the
 *       current path) for some header files.
*/

#include <stdio.h>
#include <10_HeaderFileFunc.h>


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

// ---------------- FUNCTIONS ----------------
void function1() {
    printf("We are in the function1 scope\n");
}

void function2(int a, float b) {
    printf("We are in the function2 scope\n");
    printf("a = %d, b = %.2f\n", a , b);
}

int function3(int x) {
    printf("We are in the function3 scope\n");
    x = x+2;
    int y = x;

    return y;
}