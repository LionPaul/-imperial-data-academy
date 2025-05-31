/*
Mission 01 – Declaration and Initialization

Create a simple program with different types of variables (int, float, char, double).

Explain with comments the difference between declaration and initialization.
*/

#include <stdio.h>

int main()
{
    // DECLARATION SECTION
    int intNum; 
    /*
    The whole numbers are the set of numbers that includes the natural numbers 
    (or positive integers: 1,2,3,...), zero (0), and negative numbers (−1,−2,−3,...). 
    They can be visualized on a number line, extending infinitely in both directions from zero. 
    Whole numbers do not contain fractional or decimal parts.
    */

    float floatNum;
    /*
    Floating-point numbers are the way computers represent and approximate real numbers. 
    Since many real numbers have an infinite number of decimal places and cannot be stored exactly 
    in a finite amount of memory, floating-point numbers use a structure that allows for a wide range of values 
    ​​and fractional parts, but with limited precision. This limitation results in rounding, where the real number
    is approximated to the nearest representable value within the system, and does not allow for 
    the use of exact fractions. This can lead to small differences in the results of calculations.
    */

    double doubleNum;
    /*
    Doubles follow the same principle as floats, 
    the difference is that they take up more memory for greater accuracy and less rounding. 
    Thus, precision costs more space.
    */

    char charNum[50];
    /*
    A char is a fundamental data type that stores a single character (such as a letter, number, or symbol).
    When you declare a char type followed by square brackets and a number (for example, char name[50];), 
    you are creating an array (or vector) of characters. 
    This number specifies the number of positions the array will have, allowing it to store a sequence of
    characters, which is commonly referred to as a string.
    */

    // LORE & DOCUMENTATION PHASE
    printf("\nDATA TYPE MANUAL:\n\n");

    printf("=== IMPERIAL DATA TYPE MANUAL ===\n\n");

    printf("[INT] WHOLE NUMBERS:\n");
    printf("The whole numbers are the set that includes:\n");
    printf(" -> Natural numbers (positive integers: 1, 2, 3, ...)\n");
    printf(" -> Zero (0)\n");
    printf(" -> Negative integers (−1, −2, −3, ...)\n");
    printf("They can be visualized on a number line, extending infinitely in both directions.\n");
    printf("Whole numbers do not contain fractional or decimal parts.\n\n");

    printf("[FLOAT] FLOATING-POINT NUMBERS:\n");
    printf("Floating-point numbers are how computers represent and approximate real numbers.\n");
    printf("They allow for fractional parts, using a structure that offers a wide range of values,\n");
    printf("but with limited precision due to memory constraints.\n");
    printf(" -> This causes rounding: the value is approximated to the closest representable number.\n");
    printf(" -> Exact fractions are often not possible.\n");
    printf("This limitation can lead to small differences in calculation results.\n\n");

    printf("[DOUBLE] DOUBLE PRECISION FLOAT:\n");
    printf("Doubles work like floats, but use more memory to store values.\n");
    printf(" -> This grants them higher precision and reduces rounding errors.\n");
    printf(" -> The cost: greater memory usage.\n\n");

    printf("[CHAR] CHARACTERS AND STRINGS:\n");
    printf("A 'char' holds a single character (e.g., a letter, digit, or symbol).\n");
    printf("When using square brackets (e.g., char name[50];), you declare an array of characters.\n");
    printf(" -> This allows storage of sequences of characters (commonly called a 'string').\n");
    printf(" -> The number in brackets defines the maximum size of the string.\n\n");

    printf("\n=== DATA RECORDING PROTOCOL ===\n");
    printf("Imperial Clarification: Variable Declaration vs Initialization\n");
    printf("--------------------------------------------------------------\n");
    printf("DECLARATION: The act of informing the machine of a variable's existence.\n");
    printf("            It reserves memory, but holds no value yet.\n");
    printf("            Example: int age; // Age declared but undefined\n\n");
    printf("INITIALIZATION: The moment a value is granted to the variable.\n");
    printf("                The memory is not just allocated, but filled with meaning.\n");
    printf("                Example: age = 25; // Age now contains data\n");
    printf("You may also declare and initialize in one move:\n");
    printf("                int age = 25; // Declaration + Initialization\n\n");
    printf("Now, prepare to register your own attributes for Imperial Service.\n\n");


    //INITIALIZATION AND ASSIGNMENT OF VARIABLES
    printf("\nEnter your name as Inquisitor: ");
    scanf(" %[^\n]", charNum); // This reading format allows the reading of character strings and spaces.

    printf("\nEnter your age: ");
    scanf("%d", &intNum); 

    printf("\nEnter your height in meters (e.g., 1.75): ");
    scanf("%f", &floatNum); 

    printf("\nEnter your weight in kilograms (e.g., 70.5): ");
    scanf("%lf", &doubleNum); 

    //Printing information
    printf("\n\nComplete imperial record...");
    printf("\nHis name was: %s Now he is a candidate for servant of the empire.", charNum);
    printf("\nYour age was: %d now it is -1 year because soon you will be born as a servant of the empire.", intNum);
    printf("\nHis height was: %.2f Now it is irrelevant.", floatNum);
    printf("\nWeight: %.2lf kg - Subject to reduction due to rations.\n", doubleNum);

    return 0;
}