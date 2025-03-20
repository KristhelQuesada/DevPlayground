/*
 * =======================================================================
 *                         
 * =======================================================================
 *
 * - General Explanation:
 *   An aray is a pointer by itself
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
    int arr[] = {1, 22, 3, 14, 25};

    // Using the index
    for (i=0; i<5; i++) {
        printf("arr[%d] %d\n", i, arr[i]);
    }
    printf("----------------------------\n");

    // Using pointer arithmetics #1
    printf("arr[0]: %d\n", *arr);
    printf("arr[1]: %d\n", *(arr+1));
    printf("arr[2]: %d\n", *(arr+2));
    printf("arr[3]: %d\n", *(arr+3));
    printf("arr[4]: %d\n", *(arr+4));
    printf("----------------------------\n");

    // Using pointer arithmetics #2
    for (i=0; i<5; i++) {
        printf("arr[%d] %d\n", i, *(arr + i));
    }

    return 0;
}