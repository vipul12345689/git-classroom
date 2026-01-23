/*
 * ============================================================================
 *                         array_utils.cpp
 *                 Implementation File - YOUR CODE GOES HERE
 * ============================================================================
 * 
 * INSTRUCTIONS:
 * 1. First complete the function parameters in array_utils.h
 * 2. Then implement each function below
 * 3. Follow the step numbers in order
 * 4. Test each function before moving to the next
 * 
 * ============================================================================
 */


 #include "array_utils.h"


// ============================================================================
// STEP 1: Implement print function
// ============================================================================
/*
 * PURPOSE: Display all elements of the array
 * 
 * PARAMETERS:
 *   - pointer to the first element (const = cannot modify)
 *   - number of elements in the array
 * 
 * HINT: 
 *   - Use pointer arithmetic: *(p + i) OR array indexing: p[i
 *   - Loop through and print each element followed by a space
 *   - Print newline at the end
 */
void print(int arr[],int size) {
    for(int i=0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}


// ============================================================================
// STEP 2: Implement sum function
// ============================================================================
/*
 * PURPOSE: Calculate and return the sum of all elements
 * 
 * PARAMETERS:
 *   - pointer to the first element (const = cannot modify)
 *   - number of elements in the array
 * 
 * RETURN: The sum of all elements
 * 
 * HINT:
 *   - Initialize a sum variable to 0
 *   - Loop through array and add each element to sum
 *   - Return the sum
 */
int sum(int arr[],int size) {
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    
    return sum; // Replace with actual sum
}


// ============================================================================
// STEP 3: Implement average function
// ============================================================================
/*
 * PURPOSE: Calculate and return the average of all elements
 * 
 * PARAMETERS:
 *   - pointer to the first element (const = cannot modify)
 *   - number of elements in the array
 * 
 * RETURN: The average (integer division is acceptable)
 * 
 * HINT:
 *   - You can call your sum() function here!
 *   - Average = sum / size
 *   - Be careful about division by zero
 */
int average(int arr[],int size) {
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    
    return (sum/size); // Replace with actual average
}


// ============================================================================
// STEP 4: Implement min function
// ============================================================================
/*
 * PURPOSE: Find and return the minimum element in the array
 * 
 * PARAMETERS:
 *   - pointer to the first element (const = cannot modify)
 *   - number of elements in the array
 * 
 * RETURN: The smallest element in the array
 * 
 * HINT:
 *   - Assume the first element is the minimum: int minVal = p[0];
 *   - Loop starting from index 1
 *   - If current element < minVal, update minVal
 *   - Return minVal
 */
int min(int arr[],int size) {
    int min=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    return min; // Replace with actual minimum
}


// ============================================================================
// STEP 5: Implement max function
// ============================================================================
/*
 * PURPOSE: Find and return the maximum element in the array
 * 
 * PARAMETERS:
 *   - pointer to the first element (const = cannot modify)
 *   - number of elements in the array
 * 
 * RETURN: The largest element in the array
 * 
 * HINT:
 *   - Assume the first element is the maximum: int maxVal = p[0];
 *   - Loop starting from index 1
 *   - If current element > maxVal, update maxVal
 *   - Return maxVal
 */
int max(int arr[],int size) {
    int max=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    return max; // Replace with actual maximum
}


// ============================================================================
// STEP 6: Implement incrementEachElementBy function
// ============================================================================
/*
 * PURPOSE: Add a value N to each element in the array
 * 
 * PARAMETERS:
 *   - pointer to the first element (NOT const - will modify!)
 *   - number of elements in the array
 *   - value to add to each element
 * 
 * NOTE: 
 *   - This function MODIFIES the original array
 *   - That's why we don't use 'const' here!
 * 
 * HINT:
 *   - Loop through each element
 *   - Add N to each: p[i] += N; OR *(p + i) += N;
 */
void incrementEachElementBy(int *arr,int size,int n) {
    for(int i=0; i<size; i++){
        *(arr+i)+=n;
    }
    
}


// ============================================================================
// STEP 7: Implement decrementEachElementBy function
// ============================================================================
/*
 * PURPOSE: Subtract a value N from each element in the array
 * 
 * PARAMETERS:
 *   - pointer to the first element (NOT const - will modify!)
 *   - number of elements in the array
 *   - value to subtract from each element
 * 
 * NOTE: 
 *   - This function MODIFIES the original array
 * 
 * HINT:
 *   - Loop through each element
 *   - Subtract N from each: p[i] -= N; OR *(p + i) -= N;
 */
void decrementEachElementBy(int *arr,int size,int n) {
    for(int i=0; i<size; i++){
        *(arr+i)-=n;
    }
    
}


// ============================================================================
// STEP 8: Implement sort function (Any algorithm of your choice)
// ============================================================================
/*
 * PURPOSE: Sort the array in ascending order
 * 
 * PARAMETERS:
 *   - pointer to the first element
 *   - number of elements in the array
 * 
 * NOTE: 
 *   - This function MODIFIES the original array
 * Example
 * ALGORITHM:
 *   for i = 0 to size-1:
 *       for j = 0 to size-i-2:
 *           if p[j] > p[j+1]:
 *               swap p[j] and p[j+1]
 * 
 *   Create a helper function using REFERENCES (NOT POINTERS) for swapping:
      Then call it: swap(p[j], p[j+1]);
 */
 void swap(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
 }
 
void sort(int arr[], int size) {
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] > arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
    
}