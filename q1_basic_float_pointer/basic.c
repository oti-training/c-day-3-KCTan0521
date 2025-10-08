/*
 * Day 3 Exercise 1: Basic Pointer Operations with Float
 *
 * Implement the pointer operations as described in the tutorial Step 1.
 * Create a program that:
 * 1. Declares a float variable temp = 25.5f
 * 2. Creates a pointer to it
 * 3. Prints the original value and address
 * 4. Changes the value via the pointer to 30.0f
 * 5. Prints the new value
 *
 * Compile: gcc -Wall -std=c99 -o basic basic.c
 * Run: ./basic
 * Expected output matches the tutorial.
 */

#include <stdio.h>

int main() {
    // TODO: Implement the exercise here
    // Hint: Remember to use & for addresses and * for dereferencing. Declare a float, point to it, print value and address, modify via pointer, print again.

    float temp = 25.5f;
    float *temp_ptr = &temp;

    // Placeholder - replace with your implementation
    printf("Exercise 1: Basic Float Pointer\n");
    // printf("Implement the TODO above to see correct output.\n");

    printf("Original value : %f\n", temp);
    printf("Original address : %p\n", (void*)&temp);

    *temp_ptr = 30.0f;

    printf("New Value : %f\n", *temp_ptr);

    if (*temp_ptr == 30.0f) {
        printf("Correct implementation! ✓\n");
    }

    return 0;
}

