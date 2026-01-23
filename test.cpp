/*
 * DONOT MODIFY THIS 
 test.cpp
 * Reads test cases from stdin
 * 
 * Input format:
 *   size
 *   arr[0] arr[1] ... arr[size-1]
 *   expected_value (for sum/average/min/max)
 *   OR
 *   n (increment/decrement value)
 *   expected[0] expected[1] ... expected[size-1] (for increment/decrement/sort)
 * 
 * Usage:
 *   ./test print < test_files/test_print.txt
 *   ./test sum < test_files/test_sum.txt
 *   ./test average < test_files/test_average.txt
 *   ./test min < test_files/test_min.txt
 *   ./test max < test_files/test_max.txt
 *   ./test increment < test_files/test_increment.txt
 *   ./test decrement < test_files/test_decrement.txt
 *   ./test sort < test_files/test_sort.txt
 */

#include <iostream>
#include <cassert>
#include <cstring>
#include "array_utils.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./test <function_name>" << std::endl;
        return 1;
    }
    
    int size;
    int arr[100];
    
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    if (strcmp(argv[1], "print") == 0) {
        print(arr, size);
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "sum") == 0) {
        int expected;
        std::cin >> expected;
        int result = sum(arr, size);
        assert(result == expected);
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "average") == 0) {
        int expected;
        std::cin >> expected;
        int result = average(arr, size);
        assert(result == expected);
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "min") == 0) {
        int expected;
        std::cin >> expected;
        int result = min(arr, size);
        assert(result == expected);
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "max") == 0) {
        int expected;
        std::cin >> expected;
        int result = max(arr, size);
        assert(result == expected);
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "increment") == 0) {
        int n;
        std::cin >> n;
        int expected[100];
        for (int i = 0; i < size; i++) {
            std::cin >> expected[i];
        }
        incrementEachElementBy(arr, size, n);
        for (int i = 0; i < size; i++) {
            assert(arr[i] == expected[i]);
        }
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "decrement") == 0) {
        int n;
        std::cin >> n;
        int expected[100];
        for (int i = 0; i < size; i++) {
            std::cin >> expected[i];
        }
        decrementEachElementBy(arr, size, n);
        for (int i = 0; i < size; i++) {
            assert(arr[i] == expected[i]);
        }
        std::cout << "PASSED" << std::endl;
    }
    else if (strcmp(argv[1], "sort") == 0) {
        int expected[100];
        for (int i = 0; i < size; i++) {
            std::cin >> expected[i];
        }
        sort(arr, size);
        for (int i = 0; i < size; i++) {
            assert(arr[i] == expected[i]);
        }
        std::cout << "PASSED" << std::endl;
    }
    else {
        std::cout << "Unknown function: " << argv[1] << std::endl;
        return 1;
    }
    
    return 0;
}