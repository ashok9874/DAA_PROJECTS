Iterative Factorial

#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Start time
    auto startTime = high_resolution_clock::now();

    // Calculate factorial using loop
    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    // End time
    auto endTime = high_resolution_clock::now();

    // Calculate execution time
    auto executionTime =
        duration_cast<nanoseconds>(endTime - startTime).count();

    cout << "\nFactorial of " << n << " = " << factorial << endl;

    cout << "Execution Time: "
         << executionTime << " nanoseconds" << endl;

    cout << "Time Complexity: O(n)" << endl;
    cout << "Space Complexity: O(1)" << endl;

    return 0;
}

OUTPUT :
Enter a number: 5

Factorial of 5 = 120
Execution Time: 160 nanoseconds
Time Complexity: O(n)
Space Complexity: O(1)


Recursive Factorial

#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Recursive factorial function
long long factorial(int n)
{
    // Base condition
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Recursive call
    return n * factorial(n - 1);
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Start time
    auto startTime = high_resolution_clock::now();

    // Calculate factorial
    long long result = factorial(n);

    // End time
    auto endTime = high_resolution_clock::now();

    // Calculate execution time
    auto executionTime =
        duration_cast<nanoseconds>(endTime - startTime).count();

    cout << "\nFactorial of " << n << " = " << result << endl;

    cout << "Execution Time: "
         << executionTime << " nanoseconds" << endl;

    cout << "Time Complexity: O(n)" << endl;
    cout << "Space Complexity: O(n)" << endl;

    return 0;
}

OUTPUT:
Enter a number: 6

Factorial of 6 = 720
Execution Time: 290 nanoseconds
Time Complexity: O(n)
Space Complexity: O(n)




