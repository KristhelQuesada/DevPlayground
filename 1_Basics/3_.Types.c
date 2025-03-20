/*
 * =======================================================================
 *                          CLASSIC HELLO WORLD!
 * =======================================================================
 *
 * - General Explanation:
 *   
 * 
 * - Important Questions:
 * 
 * - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

int main(int argc, char* argv[]) {
    // COnversion from lower case to upper case
    // Using a ASCII Delta
    // (...pending)

    // Declaring variables of different data types
    char a;
    short int b;
    int c;
    long int d;
    float e;
    double f;
    long double g;

    // Print each type size in bytes (8 bits)
    /*
     * - sizeof() return a long unsigned int type of value
     * - %lu is used for long unsigned values, just like %d is the format
     *   for int values. If we don-t use %lu for values that are defined
     *   as long unsigned, then will have a warning.
    */
    printf("char: %lu\n", sizeof(a));               // 1  * 8 = 8 bits    not as long as numbers because they're fewer
    printf("short int: %lu\n", sizeof(b));          // 2  * 8 = 16 bits
    printf("int: %lu\n", sizeof(c));                // 4  * 8 = 32 bits
    printf("long int: %lu\n", sizeof(d));           // 8  * 8 = 64 bits
    printf("float: %lu\n", sizeof(e));              // 4  * 8 = 32 bits
    printf("double: %lu\n", sizeof(f));             // 8  * 8 = 64 bits
    printf("long double: %lu\n", sizeof(g));        // 16 * 8 = 128 bits

    // We can also specify the size to be explicit
    __uint8_t var = 0;                              // unsigned int of 8 bits, and t for typedef
    __uint32_t var2= 0;

     

    return 0;
}