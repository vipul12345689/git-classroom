# Makefile for Array Utilities – Automated Testing

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TEST_BIN = part_1

SRC = array_utils.cpp test.cpp
OBJ = array_utils.o test.o

TEST_DIR = test_files

# =====================
# Default target
# =====================
all: $(TEST_BIN)

# =====================
# Build test binary
# =====================
$(TEST_BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_BIN) $(OBJ)

array_utils.o: array_utils.cpp array_utils.h
	$(CXX) $(CXXFLAGS) -c array_utils.cpp

test.o: test.cpp array_utils.h
	$(CXX) $(CXXFLAGS) -c test.cpp

# =====================
# Individual tests
# =====================
test_print: $(TEST_BIN)
	./$(TEST_BIN) print < $(TEST_DIR)/test_print.txt

test_sum: $(TEST_BIN)
	./$(TEST_BIN) sum < $(TEST_DIR)/test_sum.txt

test_average: $(TEST_BIN)
	./$(TEST_BIN) average < $(TEST_DIR)/test_average.txt

test_min: $(TEST_BIN)
	./$(TEST_BIN) min < $(TEST_DIR)/test_min.txt

test_max: $(TEST_BIN)
	./$(TEST_BIN) max < $(TEST_DIR)/test_max.txt

test_increment: $(TEST_BIN)
	./$(TEST_BIN) increment < $(TEST_DIR)/test_increment.txt

test_decrement: $(TEST_BIN)
	./$(TEST_BIN) decrement < $(TEST_DIR)/test_decrement.txt

test_sort: $(TEST_BIN)
	./$(TEST_BIN) sort < $(TEST_DIR)/test_sort.txt

# =====================
# Run ALL tests
# =====================
test: test_print test_sum test_average test_min test_max \
      test_increment test_decrement test_sort
	@echo "ALL ARRAY TESTS PASSED"

# =====================
# Cleanup
# =====================
clean:
	rm -f *.o $(TEST_BIN)

.PHONY: all clean test \
        test_print test_sum test_average test_min test_max \
        test_increment test_decrement test_sort
