
    -----SUMMARY FOR PRACTICAL- 1

Bubble Sort
Compares adjacent elements and swaps them until the array is sorted. Time Complexity: O(n²).

Selection Sort
Finds the smallest element and places it in the correct position in each pass. Time Complexity: O(n²).

Insertion Sort
Inserts each element into its correct position in the sorted part of the array. Time Complexity: O(n²) (Best: O(n)).

Merge Sort
Uses divide and conquer by splitting and merging arrays. Time Complexity: O(n log n).

Quick Sort
Selects a pivot, partitions the array, and recursively sorts the parts. Time Complexity: O(n log n) average, O(n²) worst case.

---- CONCLUSION FOR PRACTICAL- 1

Sorting algorithms are essential in Design and Analysis of Algorithms (DAA) because they organize data efficiently for faster processing and searching. Simple algorithms like Bubble, Selection, and Insertion Sort are suitable for small datasets, while Merge Sort and Quick Sort are preferred for large datasets due to their better performance. Each algorithm has its own advantages and limitations depending on the application. Choosing the appropriate sorting algorithm improves the efficiency of programs. Therefore, understanding these algorithms helps in designing optimized and effective software solutions.

                                                 ## PRACTICAL - 2 DAA
-----SUMMARY FOR PRACTICAL-2

Linear Search

Checks each element one by one until the target element is found.
Works on both sorted and unsorted arrays.
Time Complexity: O(n).
Binary Search

Repeatedly divides a sorted array into halves to find the target.
Much faster than linear search for large sorted datasets.
Time Complexity: O(log n).
----- CONCLUSION FOR PRACTICAL-2

Linear Search and Binary Search are two important searching algorithms used to find elements in a dataset. Linear Search is simple and works on both sorted and unsorted data, while Binary Search is faster but requires the data to be sorted. Linear Search is suitable for small datasets, whereas Binary Search is more efficient for large sorted datasets. Choosing the right search algorithm improves the performance and efficiency of a program. Therefore, the selection of the algorithm depends on the size and arrangement of the data.

PRACTICAL 3.../

SUMMARY...

Max Heap and Min Heap are tree-based data structures used for sorting and finding elements quickly. Max Heap Sort arranges elements in ascending order, while Min Heap Sort can be used to arrange elements in descending order. Heap Sort has a time complexity of O(n log n).

CONCLUSION...

Heap Sort is an efficient and reliable sorting method. Max Heap and Min Heap help organize data based on the largest or smallest element, making sorting simple and efficient.

PRACTICAL 4.../
SUMMARY...

Factorial can be calculated using iterative and recursive methods. The iterative method uses a loop, while the recursive method calls the same function repeatedly until it reaches the base case.

CONCLUSION...

Both methods give the same factorial result. The iterative method is simple and uses less memory, while the recursive method is easier to understand for problems involving recursion.

PRACTICAL 7.../
SUMMARY...

The Coin Change problem can be solved using Dynamic Programming to find the minimum number of coins needed to make a given amount. The program stores previously calculated results to avoid repeated calculations and gives an efficient solution.

CONCLUSION..

Dynamic Programming makes the Coin Change problem easier and faster to solve. It finds the minimum number of coins required for the given amount and works well for different coin values.

PRACTICAL 5.../
SUMMARY...

The Knapsack problem is solved using Dynamic Programming to find the maximum value that can be carried without exceeding the given weight capacity. The method checks each item and decides whether to include it or not.

CONCLUSION...

Dynamic Programming provides an efficient way to solve the Knapsack problem. It gives the maximum possible value while keeping the total weight within the given capacity.

PRACTICAL 6.../
SUMMARY...

Chain Matrix Multiplication using Dynamic Programming finds the optimal order of multiplying matrices to minimize the total number of scalar multiplications. The algorithm stores intermediate results in a dynamic programming table and efficiently determines the minimum multiplication cost. It has a time complexity of **O(n³)** and a space complexity of **O(n²)**, with execution time measured using Python’s `time.perf_counter()`.

CONCLUSION...
Chain Matrix Multiplication using Dynamic Programming efficiently finds the best order of matrix multiplication with minimum computation cost. It reduces unnecessary calculations by storing previously solved subproblems. The method is efficient, systematic, and has a time complexity of **O(n³)**.
