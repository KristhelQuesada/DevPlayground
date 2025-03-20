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
#include <string.h> // for strlen()

int main(int argc, char* argv[]) {
    int i;
    char string[30];

    // Stores the input data inside the string
    // %[^\n] everything before the breakspace
    printf("Enter a string: ");
    scanf("%[^\n]", string);

    printf("________________________________________\n");
    printf("String: %s\n", string);
    printf("________________________________________\n");
    
    // Prints the size if strings
    printf("String size: %lu\n", strlen(string));
    printf("________________________________________\n");

    // Prints the chain or string, char by char
    for (i=0; i<strlen(string); i++) {
        putchar(string[i]);
        putchar('\n');
    }

    return 0;
}