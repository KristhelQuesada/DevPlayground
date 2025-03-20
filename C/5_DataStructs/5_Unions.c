/*
 * =======================================================================
 *                              SWAP
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
#include <stdbool.h>

typedef struct {
    int x;
    float y;
    char z;
} mystr;

typedef union {
    int x;
    float y;
    char z;
} myunion;

typedef struct {
    char *name;
    bool isRobot;

    // This means my character will be able to
    // have a personality or a firmware version
    // but never both
    union {
        char *personality;
        int firmware_version;
    };
} character;

void printCharacter(character* c) {
    printf("Character: %s -- ", c->name);

    if (c->isRobot) {
        printf("version %d\n", c->firmware_version);
    } else {
        printf("%s\n", c->personality);
    }
}

int main(int argc, char *argv[]) {
    mystr s;
    s.x = 45;
    s.y = 9.87;
    s.z = 'K';

    myunion u;
    u.x = 45;
    u.y = 9.87;
    u.z = 'K';


    // DIFFERENCE 1
    // Structs are bigger because it reserves space for all the members
    // while unions reserves space only for the biggest member size
    printf("Struct size: %lu\n", sizeof(mystr));
    printf("Union size: %lu\n", sizeof(myunion));

    // DIFFERENCE 2
    // Structs allocates their memory on different locations while unions
    // allocates them in the same memory direction.
    printf("\nStruct members --> %d, %f, %c\n", s.x, s.y, s.z);
    printf("Union members --> %d, %f, %c\n\n", u.x, u.y, u.z);

    // EXAMPLE OF USE
    // Ususally we use unions inside of a struct. Assume
    character darthvader;
    character R2D2;

    darthvader.name = "Anakin Skywalker";
    darthvader.isRobot = false;
    darthvader.personality = "Cold-blooded enemy";

    R2D2.name = "R2-D2";
    R2D2.isRobot = true;
    R2D2.firmware_version = 5;

    printCharacter(&darthvader);
    printCharacter(&R2D2);

    return 0;
}