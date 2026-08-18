Summary

This program demonstrates two methods of calculating the factorial of a number in C++:

Iterative Factorial
Uses a for loop to multiply numbers from 1 to n.
Measures execution time using the <chrono> library.
Time Complexity: O(n)
Space Complexity: O(1) because it uses only a few variables.
Recursive Factorial
Uses a recursive function that calls itself until the base condition (n == 0 or n == 1) is reached.
Measures execution time using the <chrono> library.
Time Complexity: O(n)
Space Complexity: O(n) because each recursive call occupies space in the function call stack.

The program also compares the execution time and memory usage of both approaches.

Conclusion

The factorial of a number can be computed using either iterative or recursive methods. Both approaches have the same time complexity of O(n) since they perform n multiplications. However, the iterative approach is more memory-efficient because it requires constant space O(1), while the recursive approach requires O(n) space due to recursive function calls. Therefore, for larger values of n, the iterative method is generally preferred because it consumes less memory and avoids the risk of stack overflow. The experiment highlights the importance of analyzing both time and space complexity when choosing an algorithm.