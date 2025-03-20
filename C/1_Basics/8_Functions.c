/*
 * =======================================================================
 *                           FUNCTIONS SINTAXIS
 * =======================================================================
 *
 * - General Explanation:
 *   First thing we need to be sure about is the type of the function,
 *   wether it's a int, float, boolean, char or void even (that means
 *   it doesn't return anything). The convention is that the function's
 *   name must be in lower case and also be verbs.
 * 
 *   When the parameters are passed by value, we create a copy of the va-
 *   riable inside the scope of the function that means any change made
 *   to the variable will not be applied to the original.
 *   If our intentions are to change the variable, then its better to pass
 *   its memory direction using the &.
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

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

//int function4(int &x) {
//    printf("We are in the function4 scope\n");
//    x = *x;
//    int y = x;
//
//    return y;   // If we define a type, we must return it
//}




int main(int argc, char* argv[]) {
    int v1;
    int v2 = 10;

    function1();
    function2(3, 4.5);
    v1 = function3(v2);

    printf("\n------- RESULTS A -------\n");
    printf("The value of v1 is: %d\n", v1);
    printf("The value of v2 is: %d\n", v2);


    //printf("\n------- RESULTS B -------\n");
    //printf("The value of v1 is: %d\n", v1);
    //printf("The value of v1 is: %d\n", v2);



    return 0;
}