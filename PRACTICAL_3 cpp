#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Max Heapify
void heapify(vector<int>& a, int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

// Max Heap Sort
void heapSort(vector<int>& a)
{
    int n = a.size();

    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Extract elements from heap
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Measure execution time
    auto start = high_resolution_clock::now();

    heapSort(a);

    auto stop = high_resolution_clock::now();

    // Calculate execution time
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n\nExecution Time: "
         << duration.count() << " microseconds";

    cout << "\n\nTime Complexity:";
    cout << "\nBest Case    : O(n log n)";
    cout << "\nAverage Case : O(n log n)";
    cout << "\nWorst Case   : O(n log n)";

    cout << "\n\nSpace Complexity: O(log n)";

    return 0;
}
