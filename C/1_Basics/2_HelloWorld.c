/*
 * =======================================================================
 *                          CLASSIC HELLO WORLD!
 * =======================================================================
 *
 * - General Explanation:
 *   The 'printf()' command is part of the stdio library. Also all func-
 *   tions must specify it return value, in case of the main function the
 *   suggestion is to be declared as int because of the return 0 to indi-
 *   cate its an error code, therefore indicating the user if something
 *   went wrong. If the error code is zero, that means there was no error.
 *   The arguments in the function is to allow arguments by command line.
 * 
 * - Important Questions:
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>                    // Includes always at the beginning

int main(int argc, char* argv[]) {
    printf("Hello World!\n");

    return 0;
}