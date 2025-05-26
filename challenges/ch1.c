/*
📦 Mission 01 – Declaration and Initialization

Create a simple program with different types of variables (int, float, char, double).

Explain with comments the difference between declaration and initialization.
*/

#include <stdio.h>

int main()
{
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
    char charNum[12];
    /*
    A char is a fundamental data type that stores a single character (such as a letter, number, or symbol).
    When you declare a char type followed by square brackets and a number (for example, char name[50];), 
    you are creating an array (or vector) of characters. 
    This number specifies the number of positions the array will have, allowing it to store a sequence of
     characters, which is commonly referred to as a string.
    */

    printf("The whole numbers are the set of numbers that includes the natural numbers\n (or positive integers: 1,2,3,...), zero (0), and negative numbers (−1,−2,−3,...).\n They can be visualized on a number line, extending infinitely in both directions from zero.\n Whole numbers do not contain fractional or decimal parts.\n");
    printf("Floating-point numbers are the way computers represent and approximate real numbers.\nSince many real numbers have an infinite number of decimal places and cannot be stored exactly\nin a finite amount of memory, floating-point numbers use a structure that allows for a wide range of values\n ​​and fractional parts, but with limited precision. This limitation results in rounding, where the real number\nis approximated to the nearest representable value within the system, and does not allow for\nthe use of exact fractions. This can lead to small differences in the results of calculations.\n");
    printf("Doubles follow the same principle as floats,\n the difference is that they take up more memory for greater accuracy and less rounding.\n Thus, precision costs more space.");
    printf("A char is a fundamental data type that stores a single character (such as a letter, number, or symbol).\nWhen you declare a char type followed by square brackets and a number (for example, char name[50];),\nyou are creating an array (or vector) of characters.\nThis number specifies the number of positions the array will have, allowing it to store a sequence of\ncharacters, which is commonly referred to as a string.");

    printf("\nEnter your name as Inquisitor: ");
    scanf("%c", &charNum);
    printf("\nEnter your age: ");
    scanf("%d", &intNum);
    printf("\nEnter your high: ");
    scanf("%f", &floatNum);
    printf("\nEnter your high: ");
    scanf("%f", &floatNum);


}
