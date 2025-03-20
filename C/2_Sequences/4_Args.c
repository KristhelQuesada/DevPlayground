/*
 * =======================================================================
 *                         COMMAND LINE ARGUMENTS
 * =======================================================================
 *
 * - General Explanation:
 *   We need to remember that argc stored the amount of arguments, while
 *   argv stores the value of those arguments. Also, *argv[] means that
 *   argv is an array of pointers (double pointer because an array it's
 *   a pointer by itself). Because argv's data type is char, then i'll
 *   be easy for us to extract the value due to the special char "\0".
 *   Remember the program's name counts as arguments.
 *   %s is the one who is responsible for looking for the \0
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;

    // Prints the amount of arguments
    printf("Amount of arguments: %d\n", argc);

    // Prints the argument's list
    for (i=0; i<argc; i++) {
        printf("[%d]: %s\n", i, argv[i]);
    }

    // To access to and argument
    printf("\nFirst letter of the 3rd arg: %c\n", argv[3][0]);

    // Remember to use atoi() and stoi()


    return 0;
}