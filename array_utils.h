/*
 * ============================================================================
 *                         array_utils.h
 *                    Header File - Function Declarations
 * ============================================================================
 * 
 * INSTRUCTIONS:
 * Fill in the missing parameters for each function declaration.
 * Pay attention to where 'const' should be used!
 * 
 * REMEMBER:
 * - Use 'const int *p' when the function only READS the array
 * - Use 'int *p' when the function MODIFIES the array
 * 
 * ============================================================================
 */

#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H
#include <iostream>
// ============================================================================
// FUNCTIONS USING POINTERS (Read-Only Access)
// These functions do NOT modify the array - use 'const'
// ============================================================================

/*
 * STEP 1: print
 * PURPOSE: Display all elements of the array
 * FILL IN: pointer to const int array, size
 */
void print(int arr[],int size);

/*
 * STEP 2: sum
 * PURPOSE: Calculate and return the sum of all elements
 * FILL IN: pointer to const int array, size
 */
int sum(int arr[],int size);

/*
 * STEP 3: average
 * PURPOSE: Calculate and return the average of all elements
 * FILL IN: pointer to const int array, size
 */
int average(int arr[],int size);

/*
 * STEP 4: min
 * PURPOSE: Find and return the minimum element
 * FILL IN: pointer to const int array, size
 */
int min(int arr[],int size);

/*
 * STEP 5: max
 * PURPOSE: Find and return the maximum element
 * FILL IN: pointer to const int array, size
 */
int max(int arr[],int size);


// ============================================================================
// FUNCTIONS USING POINTERS (Modifying Access)
// These functions MODIFY the array - do NOT use 'const'
// ============================================================================

/*
 * STEP 6: incrementEachElementBy
 * PURPOSE: Add N to each element in the array
 * FILL IN: pointer to int array, size, increment value N
 */
void incrementEachElementBy(int *arr,int size,int n);

/*
 * STEP 7: decrementEachElementBy
 * PURPOSE: Subtract N from each element in the array
 * FILL IN: pointer to int array, size, decrement value N
 */
void decrementEachElementBy(int *arr,int size,int n);


// ============================================================================
// FUNCTION USING REFERENCES (for swapping during sort)
// This function MODIFIES the array
// ============================================================================
// CREATE A HELPER function
void swap(int *a,int*b);
/*
 * STEP 8: sort
 * PURPOSE: Sort the array in ascending order
 * FILL IN: pointer to int array, size
 */
 
void sort(int arr[],int size);


#endif // ARRAY_UTILS_H