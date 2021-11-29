#pragma once
#include <stdio.h>
#include <stdlib.h>

#define ITEMCOUNT 5
#define PI 3.14159265359

void enterTwoNumbers(){
    int numberOne, numberTwo;

    printf("Input your two number: ");

    while (scanf_s("%d%d", &numberOne, &numberTwo) != 2)
    {
        while (getchar() != '\n');
        printf("Try again: ");
    }

    printf("You entered %d and %d\n", numberOne, numberTwo);

    int arrayOne[] = {numberOne};
    int arrayTwo[] = {numberTwo};

    printf("ArrayOne %d and ArrayTwo %d\n", arrayOne[0], arrayTwo[0]);
}

/* EXERCISE 1 c) */
int* getIntArrayPointer(int size)
{
    int* array_pointer;
    array_pointer = (int *) malloc(size * sizeof(int)); // allocate size of int times size of array memory on the heap!

    return array_pointer; //since array_pointer is allocated on the heap, it will not escape the fct.
}

/* EXERCISE 1 d) */
void printIntArray(int* array, int size)
{
    for (int i = 0; i<size; ++i)
    {
        printf_s("Element [%d]: %d\n", i, array[i]);
    }
}

/* EXERCISE 1 e) */
void swapInts(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

/* EXERCISE 1 f) */
void swapInts2(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void swapIntArrays(int* array_a, int size_a, int* array_b, int size_b)
{
    // Arrays can have different size -> so we only want to swap till the last element of the shorter array
    int swap_size = 0;

    if (size_a < size_b)
        swap_size = size_b;
    else
        swap_size = size_a;

    // Swap each value of array A and B
    for (int i = 0; i < swap_size; ++i)
    {
        swapInts2(array_a+i, array_b+i); // Don't forget to set pointer to right address here!
    }
}

void exerciseOne()
{
    /* EXERCISE 1 a) */
    int numberOne, numberTwo;

    printf("Input your two number: \n");

    while (scanf_s("%d%d", &numberOne, &numberTwo) != 2)
    {
        while (getchar() != '\n');
        printf("Try again: \n");
    }

    printf("You entered %d and %d\n", numberOne, numberTwo);

    /* EXERCISE 1 b) */
    int* arrayOne = getIntArrayPointer(1);
    arrayOne[0] = numberOne;
    int* arrayTwo = getIntArrayPointer(1);
    arrayTwo[0] = numberTwo;

    printf("ArrayOne %d and ArrayTwo %d\n", arrayOne[0], arrayTwo[0]);

    printIntArray(arrayOne, 1);
    printIntArray(arrayTwo, 1);

    // Swap Arrays:
    swapIntArrays(arrayOne, 1, arrayTwo, 1);

    printIntArray(arrayOne, 1);
    printIntArray(arrayTwo, 1);
}

/* EXERCISE 2 a) */
struct ListItem{
    int item;
    struct ListItem *next;
};


struct ListItem *createListItem()
{
    int i = 0;
//    struct ListItem a;
    struct ListItem *pointer_a = malloc(sizeof(int) * 4);
    struct ListItem *next = malloc(sizeof(int) * 4);
//    a.item = i;
//    a.next = next;
//    pointer_a = &a;
    pointer_a->item = i;
    pointer_a->next = next;
    return pointer_a;
}

/* EXERCISE 2 b) */
int getItemAtIndex(struct ListItem* firstAddress, int index)
{
    int item = -12;

    struct ListItem* current = firstAddress;
    struct ListItem* next = firstAddress->next;

    for (int i = 0; i < index; ++i) {
        current = next;
        next = next->next;
    }

    item = current->item;

    return item;
}

void exerciseTwo()
{
    /* EXERCISE 2 a) */
    printf("Exercise 2a: \n");
    int i = -1;
    struct ListItem a;
    a.item = i;
    struct ListItem *prev = &a;

    for (int j = 1; j < ITEMCOUNT; ++j)
    {
        struct ListItem *current = createListItem();
        current->item = j;
        printf("Prev contains the following int %d\n", prev->item);
        prev->next = current;
        prev = current;
        printf("ListItem %d", j);
        printf(" contains the following int %d\n", current->item);
    }

    printf("Exercise 2b: \n");
    /* EXERCISE 2 b) */
    for (i = 0; i < ITEMCOUNT; ++i)
    {
        printf("ListItem %d", i);
        printf(" contains the following int %d\n", getItemAtIndex(&a, i));
    }
}

/* EXERCISE 03 */

double executeMath(double (*fct_pointer)(double), double d_var)
{
    return fct_pointer(d_var);
}

void exerciseThree()
{
    double d = PI/2;
    double (*sin_pointer)(double) = &sin;
    double sin_d = executeMath(sin_pointer,d);
    printf("The double: %f, and it's sinus value: %f", d, sin_d);
}