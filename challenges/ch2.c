/*
Mission 02 – Data Input and Output

Write a program that asks the user for their name, age and height, and prints this data.

Use scanf and printf.
*/

// Since the resolution of the first exercise already fulfills the requirements of this second one,
// I will reuse the initial code as a base. I will copy it below and then make only the necessary
// adjustments to fully address the objectives of this new task.

#include <stdio.h>

int main()
{
    //Declarations
    int age; 
    float height;
    char name[50];
    
    printf("\nEnter your name as Inquisitor: ");
    scanf(" %[^\n]", name); // This reading format allows the reading of character strings and spaces.

    printf("\nEnter your age: ");
    scanf("%d", &age); 

    printf("\nEnter your height in meters (e.g., 1.75): ");
    scanf("%f", &height); 

    //Printing information
    printf("\n\nComplete imperial record...");
    printf("\nHis name was: %s Now he is a candidate for servant of the empire.", name);
    printf("\nYour age was: %d now it is -1 year because soon you will be born as a servant of the empire.", age);
    printf("\nHis height was: %.2f Now it is irrelevant.", height);

    return 0;
}