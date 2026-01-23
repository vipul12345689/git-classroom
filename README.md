# Part-1: Arrays, Pointers & References in C++

## Objective
Learn to work with arrays using pointers and references in C++. Understand the use of `const` for read-only access to data.

---

## Project Structure

```
lab_pointers_arrays/
├── README.md           # This file
├── Makefile            # Build automation
├── array_utils.h       # Header file (function declarations)
├── array_utils.cpp     # Implementation file (YOUR CODE HERE)
└── main.cpp            # Main program (test your functions)
```

---

## Getting Started

### Manual Compilation 
This time, we will perform the compilation manually so that you understand the exact compilation process. You are free to use a Makefile if you are comfortable with it. A Makefile is provided for our automated grading, and you may use it, but you must read and understand how the compilation is done.

#### Step 1: Compile Source Files to Object Files
```bash
g++ -Wall -Wextra -std=c++11 -c main.cpp -o main.o
g++ -Wall -Wextra -std=c++11 -c array_utils.cpp -o array_utils.o
```

#### Step 2: Link Object Files to Create Executable
```bash
g++ -Wall -Wextra -std=c++11 -o part_1 main.o array_utils.o
```

#### Step 3: Run the Program
```bash
./part_1
```

#### Alternative: Single Command Compilation
You can also compile everything in one command:
```bash
g++ -Wall -Wextra -std=c++11 -o part_1 main.cpp array_utils.cpp
```

#### Clean Up (Manual)
```bash
rm -f main.o array_utils.o part_1
```

---

### Compiler Flags Explained

| Flag | Purpose |
|------|---------|
| `-Wall` | Enable all common warnings |
| `-Wextra` | Enable extra warnings |
| `-std=c++11` | Use C++11 standard |
| `-c` | Compile only (create .o file, don't link) |
| `-o <name>` | Specify output file name |

---

## Your Tasks

Complete the lab in the following order:

| Step | Function | File | Description |
|------|----------|------|-------------|
| 1 | `print()` | `array_utils.cpp` | Display all array elements |
| 2 | `sum()` | `array_utils.cpp` | Calculate sum of all elements |
| 3 | `average()` | `array_utils.cpp` | Calculate average of elements |
| 4 | `min()` | `array_utils.cpp` | Find minimum element |
| 5 | `max()` | `array_utils.cpp` | Find maximum element |
| 6 | `incrementEachElementBy()` | `array_utils.cpp` | Add N to each element |
| 7 | `decrementEachElementBy()` | `array_utils.cpp` | Subtract N from each element |
| 8 | `sort()` | `array_utils.cpp` | Sort array in ascending order |

---

## Instructions

### Part A: Complete the Header File (`array_utils.h`)
1. Open `array_utils.h`
2. Fill in the missing parameters for each function declaration
3. Pay attention to where `const` should be used

### Part B: Implement Functions (`array_utils.cpp`)
1. Open `array_utils.cpp`
2. Implement each function one at a time
3. Follow the hints provided in the comments
4. Test each function before moving to the next

### Part C: Test Your Code (`main.cpp`)
1. Uncomment the test calls as you complete each function
2. Compile and run after each step to verify

---

## Understanding `const` with Pointers

### When to use `const int *p`:
- When the function only **reads** the array
- Examples: `print()`, `sum()`, `average()`, `min()`, `max()`
- The compiler will prevent accidental modifications

### When NOT to use `const`:
- When the function needs to **modify** the array
- Examples: `incrementEachElementBy()`, `decrementEachElementBy()`, `sort()`

---

## Running Assessment Tests

### Compile Test Program
```bash
make test
```

## Grading Criteria

| Criteria | Points |
|----------|--------|
| Correct function parameters with proper `const` usage | 10 |
| `print()` implementation | 5 |
| `sum()` implementation | 5 |
| `average()` implementation | 10 |
| `min()` implementation | 15 |
| `max()` implementation | 15 |
| `incrementEachElementBy()` implementation | 5 |
| `decrementEachElementBy()` implementation | 5 |
| `sort()` implementation | 30 |
| **Total** | **100** |

---

## Hints

1. **Pointer Arithmetic**: `*(p + i)` is equivalent to `p[i]`
2. **Reuse Functions**: `average()` can call `sum()`
3. **Bubble Sort or any sorting algorithm**: Compare adjacent elements and swap if needed
4. **References for Swap**: `void swap(int &a, int &b)`

---

## Common Errors

-  Forgetting `const` for read-only functions
-  Using `const` for functions that modify the array
-  Off-by-one errors in loops
-  Not initializing sum/min/max variables properly

---
