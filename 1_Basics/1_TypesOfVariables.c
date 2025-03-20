/*
 * =======================================================================
 *                          TYPES OF VARIABLES
 * =======================================================================
 *
 * - Data type: Static and weak
 *   --------------------------------------------------------------------
 *   | Static |
 *   | Weak   |
 *   --------------------------------------------------------------------
 *
 * - General Explanation:
 *   In Python it was common for us to have error when we wanted to do
 *   things such as:
 *   a = 10
 *   b = '5'
 *   c = a + b
 *   Because the data type of Python is Strong, meaning we can't do opera-
 *   tions between two different types (string and integer for example).
 *   but in C, we dont have that problems because all data is interpreted
 *   as an integer and letters or any other characters will be translated
 *   into its ASCII codification.
 *   It is also important to remark that declaring a variable name 'a' and
 *   'A' is allow but not recommended, capitalized variables are used in
 *   structs, enums or other data structures.
 * 
 *  - Important Questions:
 *     1. Why do we always need a main function?
 *     2. What are those parameters in the main function?
 *     3. Why do we return to zero?
 * 
 *  - To compile remember:
 *    >> gcc <C file> -o <name of executable>
*/

#include <stdio.h>

int main(int argc, char* argv[]) {

   /* --------------------- WEAK DATA TYPE EXAMPLE ---------------------*/
   // Creating variable int
   int a = 2;

   // Creating variable char
   char b = '3';

   // So if we try to sum those two variables, the compiler will allow it
   // but the result may no necessarilly the expected, this is because we
   // declared the variable as a char and the compiler interpreted it as
   // its ASCII value
   int c = a + b;

   // Lets see the results
   printf("'a' is %d, 'b' is %c and the sum 'c' is %d\n", a, b, c);


   /* -------------------- DYNAMIC DATA TYPE EXAMPLE --------------------*/
   // If we try to change the variable type then...
   //float a = 6.4;
    
   /* We'll get ...
   >> [ERROR] Conflicting declaration but also there was a previous decla-
      ration of 'int a', C doesn't allows to define a variable if it was
      previously declared. Just to be clear, it could be possible to de-
      clare another variable with the same name but it just has to be in
      a different scope (another function).
   >> What the compiler outputs:
   TypesOfVariables.C: In function ‘int main(int, char**)’:
   TypesOfVariables.C:55:11: error: conflicting declaration ‘float a’
      55 |     float a = 6.4;
         |           ^
   TypesOfVariables.C:39:9: note: previous declaration as ‘int a’
      39 |     int a = 2;
         |
   */

   /* ------------------ DATA TYPE CONVERSION EXAMPLE ------------------*/
   // Declare variable
   int a1;

   // Declare and initialize variable
   float b1 = 7.8;

   // "Cast" b1 variable as int by initializing a1 with b1 value
   a1 = b1;

   // If we print the result we'll see that this casting doesn't go to 
   // the nearest number. We can conclude its an implicit casting but
   // not a reliable one because we lost precision
   printf("'a' is %d, 'b' is %f\n", a1, b1);


   /* --------------------- DATA TYPE SIZE EXAMPLE ---------------------*/
   int v1;                                 // 32b
   short int;                              // 16b
   long int;                               // 64b
   unsigned int test = 2147483680;         // Even unsigned only works right
                                           // with numbers between +-2^32/2
   printf("The number is: %d\n", a);

   return 0;
}