/*
 * =======================================================================
 *                              NO EXCEPTIONS
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <-I> <relative path> <.c> -o <.exe name> <-lm>
 *    >> -lm: link math flag
*/

#include <stdio.h>
#include <math.h>

// The function doesn't return the square of a number, it return if the
// operation was successful or not
int squareRoot(int num, double* out) {
    int status;
    printf("Calculating the square root of: \n");

    if (num < 0) {
        printf("The input number must be positive\n");
        status = -1;  // Invalid error flag
        goto exit;    // Jumps into a specific part of the code
    }

    *out = sqrt(num);

exit:
    return status;   // Exit code, 0 is successful
}

int main(int argc, char *argv[]) {
    int val = -4;
    double root = 0;

    int status = squareRoot(val, &root);
    printf("The error code was: %d\n", status);
    printf("The squared root of %d is %f\n", val, root);

    return 0;
}