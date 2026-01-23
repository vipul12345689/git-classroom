/*
 * ============================================================================
 *                              main.cpp
 *                    Main Program - Test Your Functions
 * ============================================================================
 * 
 * INSTRUCTIONS:
 * 1. First complete array_utils.h (fill in parameters)
 * 2. Then implement functions in array_utils.cpp
 * 3. Uncomment the test sections below as you complete each function
 * 4. Compile manually as instructed in README.md
 * 
 * ============================================================================
 */

#include <iostream>
#include "array_utils.h"

int main() {
    // =========================================================================
    // SETUP: Get array input from user
    // =========================================================================
    int size;
    int arr[100];
    
    
    std::cin >> size;
    
    // Validate size
    if (size <= 0 || size > 100) {
        std::cout << "Invalid size. Please enter a value between 1 and 100." << std::endl;
        return 1;
    }
    
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    
    // =========================================================================
    // STEP 1: Test print function
    // Uncomment when you have implemented print() in array_utils.cpp
    // =========================================================================
    print(arr,size);
    std::cout<<".this is the array .."<<std::endl;
    // TODO: Uncomment the line below after implementing print()
    // print(arr, size);
    
    
    // =========================================================================
    // STEP 2: Test sum function
    // Uncomment when you have implemented sum() in array_utils.cpp
    // =========================================================================
    std::cout << sum(arr,size) << std::endl;
    // TODO: Uncomment the line below after implementing sum()
    // std::cout << sum(arr, size) << std::endl;
    
    
    // =========================================================================
    // STEP 3: Test average function
    // Uncomment when you have implemented average() in array_utils.cpp
    // =========================================================================
    std::cout << average(arr,size) << std::endl;
    // TODO: Uncomment the line below after implementing average()
    // std::cout << average(arr, size) << std::endl;
    
    
    // =========================================================================
    // STEP 4: Test min function
    // Uncomment when you have implemented min() in array_utils.cpp
    // =========================================================================
    std::cout <<   min(arr,size)<< std::endl;
    // TODO: Uncomment the line below after implementing min()
    // std::cout << min(arr, size) << std::endl;
    
    
    // =========================================================================
    // STEP 5: Test max function
    // Uncomment when you have implemented max() in array_utils.cpp
    // =========================================================================
    std::cout <<max(arr,size) << std::endl;
    // TODO: Uncomment the line below after implementing max()
    // std::cout << max(arr, size) << std::endl;
    
    
    // =========================================================================
    // STEP 6: Test incrementEachElementBy function
    // Uncomment when you have implemented incrementEachElementBy()
    // =========================================================================
    incrementEachElementBy(arr,size,5);
    for(int i=0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout <<"\n.incremented array"<< std::endl;
    // TODO: Uncomment the lines below after implementing incrementEachElementBy()
    // incrementEachElementBy(arr, size, 5);
    // print(arr, size);
    
    
    // =========================================================================
    // STEP 7: Test decrementEachElementBy function
    // Uncomment when you have implemented decrementEachElementBy()
    // =========================================================================
    decrementEachElementBy(arr,size,3);
    for(int i=0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout << "\n--- After Decrementing Each Element by 3 ---" << std::endl;
    // TODO: Uncomment the lines below after implementing decrementEachElementBy()
    // decrementEachElementBy(arr, size, 3);
    // print(arr, size);
    
    
    // =========================================================================
    // STEP 8: Test sort function
    // Uncomment when you have implemented sort()
    // =========================================================================
    sort(arr,size);
    for(int i=0; i<size; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout << "\n--- Sorted Array ---" << std::endl;
    // TODO: Uncomment the lines below after implementing sort()
    // sort(arr, size);
    // print(arr, size);
    
    
    std::cout << "\n--- Lab Complete! ---" << std::endl;
    
    return 0;
}