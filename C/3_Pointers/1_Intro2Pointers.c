/*
 * =======================================================================
 *                         
 * =======================================================================
 *
 * - General Explanation:
 *   1. We have a variable's value -> a
 *   2. That value is located in a memory address -> &a
 *   3. We create another variable that will contain that address and we
 *      use * to specify that variable refers to and address -> *pointer
 *   3. The variable by itself cointains the address -> pointer = address
 *   4. To see the content inside that address we use * again -> *pointer
 *   5. And because the pointer variable is a variable, it also is stored
 *      in some memory address -> &pointer
 * 
 *   
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    unsigned int a = 10;             // Integer variable
    unsigned int *pointer = &a;      // Pointer to num

    printf("Direction of 'a': %p\n", &a);
    printf("Value of 'a': %u\n", a);

    printf("Direction of 'pointer': %p\n", &pointer);
    printf("Value of 'pointer': %p\n", pointer);

    printf("Value stored in the direction pointed in 'pointer': %u\n", *pointer);

    return 0;
}