/*
 * =======================================================================
 *                              SWAP
 * =======================================================================
 *
 * - General Explanation:
 *   We must remember that C is an imperative programming language, that
 *   means we must specify everything we want to do. We don't have classes
 *   in C, the nearest approximation are called Structs, in short terms
 *   they are a composed data type.
 * 
 * - Important Questions:
 *      
 * 
 * - To compile remember:
 *    >> gcc <include directory> <relative path> <.c> -o <.exe name>
*/

#include <stdio.h>

enum brands {
    TOYOTA,
    HYUNDAI,
    HONDA,
    SUZUKI,
    MAZDA
};

enum colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE,
    GREY
};

// It's better not to have string as parameters, prefereable just
// integers, in case we needed strings it's better to use enums as
// the solution. Neither is recommended to use dynamic elements,
// we can use arrays but they need to be static.
struct car {
    int brand;
    int model;
    int color;
    int doors;
    int year;
    float kms;
};

int main(int argc, char *argv[]) {
    struct car car1;
    car1.brand = HONDA;
    car1.year = 1978;
    car1.color = BLACK;
    car1.doors = 2;

    // It's better tp use the arrow, more elegant and intuitive
    struct car* punt = &car1;
    punt->brand = TOYOTA;
    punt->year = 1992;
    (*punt).color = RED;

    printf("La cantidad de puertas del carro es %d\n", car1.doors);

    return 0;
}