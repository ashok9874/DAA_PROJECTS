#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int linearSearch(vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(vector<int> &arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80};

    int key;
    cout << "Enter element: ";
    cin >> key;

    auto start = high_resolution_clock::now();
    int index = linearSearch(arr, key);
    auto stop = high_resolution_clock::now();

    cout << "\nLinear Search" << endl;
    if (index != -1)
        cout << "Element Found at Index: " << index << endl;
    else
        cout << "Element Not Found" << endl;

    cout << "Time: "
         << duration_cast<nanoseconds>(stop - start).count()
         << " ns" << endl;

    start = high_resolution_clock::now();
    index = binarySearch(arr, key);
    stop = high_resolution_clock::now();

    cout << "\nBinary Search" << endl;
    if (index != -1)
        cout << "Element Found at Index: " << index << endl;
    else
        cout << "Element Not Found" << endl;

    cout << "Time: "
         << duration_cast<nanoseconds>(stop - start).count()
         << " ns" << endl;

    cout << "\n----------------------------------------";
    cout << "\nTime Complexity of Linear Search";
    cout << "\nBest Case    : O(1)";
    cout << "\nAverage Case : O(n)";
    cout << "\nWorst Case   : O(n)";
    cout << "\nSpace Complexity : O(1)";

    cout << "\n----------------------------------------";
    cout << "\nTime Complexity of Binary Search";
    cout << "\nBest Case    : O(1)";
    cout << "\nAverage Case : O(log n)";
    cout << "\nWorst Case   : O(log n)";
    cout << "\nSpace Complexity : O(1)";
    cout << "\n----------------------------------------";

    return 0;
}

Enter element: 50

Linear Search
Element Found at Index: 4
Time: 800 ns

Binary Search
Element Found at Index: 4
Time: 300 ns

----------------------------------------
Time Complexity of Linear Search
Best Case    : O(1)
Average Case : O(n)
Worst Case   : O(n)
Space Complexity : O(1)
----------------------------------------
Time Complexity of Binary Search
Best Case    : O(1)
Average Case : O(log n)
Worst Case   : O(log n)
Space Complexity : O(1)
----------------------------------------