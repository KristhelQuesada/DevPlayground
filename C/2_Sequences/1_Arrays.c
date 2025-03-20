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
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    int i;


    // Declaring and initializing two static arrays, because its size
    // cannot be change once they're declarated.
    // 1. EXplicit declaration
    // 2. "Implicit" declaratioon according to Giraud
    int list[10];
    float constants[] = {3.1415, 2.7187, 6.022e23};

    // Initializing random number generator
    srand(time(NULL));

    // Fills the first array with random number from 1 to 100
    // The index i has to be in the size range but C won't complain if
    // you go further, he just doesn't take any responsability for
    // returning invalid numbers. Could be zero, trash...
    // Also you are prone to have a segmentation fault, and that happens
    // when we go tooo far, so the OS flags an error saying that you're
    // trying to access to a forbidden space.
    for (i=0; i<10; i++) {
        int num = ((float)rand() / RAND_MAX) * 100;
        list[i] = num;
    }

    // Printing both list
    for (i=0; i<10; i++) {
        printf("[%d] %d\n", i, list[i]);
    }
    printf("________________________________________\n");

    for (i=0; i<15; i++) {
        printf("[%d] %d\n", i, list[i]);
    }
    printf("________________________________________\n");

    for (i=0; i<3; i++) {
        printf("[%d] %.4f\n", i, constants[i]);
    }
    printf("________________________________________\n");

    // Other examples
    int old = list[8];
    list[8] = 40;
    printf("[8] was %d and now is %d\n", old, list[8]);
    

    return 0;
}