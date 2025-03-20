# Basics of C

## Table of Contents
1. [History](#history)
2. [Characteristics](#characteristics)
3. [Hello World](#helloworld)
4. [Sintaxis]()
5. [Variables and Types](#variables-and-types)
6. [Operators](#operators)
7. [Control Statements](#control-statements)
8. [Compilation Steps](#compilation-steps)
9. [Functions](#functions)

## History
C is a general purpose language such as Python, but it isn't designed to be optimal in all fields. It can be usen in:

(Pending to complete as a table with information in all fields, I'd e nice to have some few examples of code for each field)

- Operating Systems
- Desk environments
- CLI applications (Command Line Interfaces)
- GUI applications ()
- Games (Doom)
- Compilers/Interpreters: Python's first implementation is written in Cython (Bassically the Python interpreter written in C)
- Embedded Systems: This is where C shines, because it has increadible features like access to system's registers in a fast and efficient way. That means that C can access memory very efficiently and fast, but that also leads to very precacious used of those features (We'll cover this with in the Dynamic Memory Section).
- Web Applications: Neither C or C++ is the prefearable tool to develop web applications, it could be used, but surely it won't be a nice experience.

Its an intermediate level language, some consider it as a low-level language but we all know assembly is the one who truly takes that place, because we are directly writing onto the processor. C is not that way, it has some level of abstraction but clearly is not that abstract. One of the best remarkable features are the following:

1. Pointers: This is how we access and manage memory directions. That means that we can modify the content of a variable accesing its memory direction without using the variable itself.
2. Access to low levels of memory:
3. Operative System level programming: The kernel of linux is written in C and other languages.
4. Basic data types (chars, numbers...): In C everything is considered a integer number, what changes is the interpretation we assigned to those numbers.

Its procedural programming (a programming paradigm)


<br>

## Characteristics
### 1. It's a general purpose language
Just like Python, 
 that means it's present on applications such as:
 
    - Operating systems
    - Desktop environments
    - CLI applications
    - GUI applications
    - Games
    - Compilers and interpreters
    - Embedded systems
    - Web applications
### 2. Intermediate level language
    - Pointers
    - Low access to memory
    - OS programmanig level
    - Basic data types such as chars and numbers
### 3. Procedural programming
    - Orderly execution of actions
    - Conditional expressions
    - Loops
    - Procedures
### 4. Imperative
### 5. Complex library functionality
    - Input/Output: stdio.h
    - Mathematical: math.h
    - String: string.h
    - Utilities: stdlib.h
    - Date and time: time.h
    - Signals: signals.h
### 6. Data types are static and weak
    - Variables must be declared before using them.
    - The type of the variable must always be indicated.
    - Soports automatic casting between some data types.


<br>

## Hello World

<br>

## Sintaxis

<br>

## Variables and Types

## Operators

## Control Statements

## Compilation Steps

## Functions





[ ---------------------------------------------------------------------------------- ]: #
[ ---------------------------------------------------------------------------------- ]: #
[ ---------------------------------------------------------------------------------- ]: #

## Libraries
1. stdio.h: 
2. math.h
3. string.h
4. stdlib.h
5. time.h
6. signal.h: POSIX (Ctrl C) when we want to kill a process for example, then we use a POSIX code and that code said wether we wanted to kill, sleep or close a process.

<br>

## Data Types
- Integers: char, int
- Floating points: float, double

<br>

### Modifiers
Modifies the variable precision, it depends of the processor.
- Size: short (16 bits), long (64 bits)
- Sign: signed, unsigned (both are 32 bits, the difference is that it allows negative representation). It works reserving the MSB and then checking if its 0 (positive number) or 1 (negative number), if we use a negative number then we reduce its precision because one is only dedicated to the sign. When using unsigned, then we are using our full 32 bits to represent the number, when we use int for example, we use 31 bits for data and 1 bit for the sign.



C Linux Kernel Standad


C es un lenguaje compilado, estos tienden a ser mas eficientes comparados con los lenguajes interpretados porque el compilador puede mofificar que instrucciones le va a mandar al procesador para hacer el codigo optimo

C is a compiled language, this tend to be more efficient tan interpreted languages because the compiler might modify what instructions its going to send to the processor to make the code more efficient. For this you can use certain flags to tell the compiler you want to do certain optimizations (PENDING). However, if you use a flag for maximum optimization, one negative trait of compiled languages is the perk that we need a compiler, and the whole process a compiler does takes time, so for maximum optimization, the compiler might take a lot of time.

So this is a win for interpreted languages, because its build time is null (zero)

Integers %d
Floats %f
Char %c
Hexadecimal %x


## Compilation Process
1. Source code: One or more .c archives.
2. Prepocessing: Deletion of comments because they're not instrutions, and replacement of macros.
3. Compilation: Converts the .c code into assembly code.
4. Link: Puts everything together, we talk here about dependencies.
5. Executable: Finally we get the .exe file