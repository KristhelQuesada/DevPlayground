/*
 * =======================================================================
 *                              ENUMS
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

// Enums are designed to substitute integer numbers
// In porgramming there's a thing called magic numbers, which basically
// that we don't know where tf the numbers came from, so to be more sophis-
// ticated, we can replace those numbers with identifiers (enums) instead.
// Always thinks thta you're not the only person who's gonna read your
// code, somebody else might do it later and i's a good practice to be as
// clear and easy to understand as possible.
// Those enums are changed in the preprocessing step
enum ERRORS {
    SUCCESS = 0,
    INVALID = -1,
    OUTOFRANGE = -5
};

// The function doesn't return the square of a number, it return if the
// operation was successful or not
int squareRoot(int num, double* out) {
    int status = SUCCESS;
    printf("Calculating the square root of: \n");

    if (num < 0) {
        printf("The input number must be positive\n");
        status = INVALID;  // Invalid error flag
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