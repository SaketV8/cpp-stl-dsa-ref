#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principle ========== //
    // Dynamic array — stores elements in contiguous memory.
    // Allows O(1) random access via index and fast push_back().
    // Insertion/deletion in middle/front is O(n) (shifting needed).
    // Resizes by allocating new memory when capacity is exceeded.
    // ======================================== //
    // ======================================== //

    // ========== Declaration ========== //
    // Creates an empty vector of integers.
    vector<int> v;
    // Creates an empty vector of string.
    vector<string> vs;
    // Creates a vector of size 5, all elements initialized to 20.
    vector<int> v(5, 20);
    // Initializes with the given values.
    vector<int> v = {1, 2, 3, 4, 5};
    // Copies all elements from v1 to v2.
    vector<int> v1 = {1, 2, 3};
    vector<int> v2(v1);
    // Copies all elements from v3 to v4.
    vector<int> v3 = {1, 2, 3};
    vector<int> v4(v3.begin(), v3.end());

    // 2D vector for matrices
    vector<vector<int>> mat;

    int m = 3;
    int n = 3;
    // m x n matrix initialized with 0 || m = row, n = col
    vector<vector<int>> mat(m, vector<int>(n, 0));
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds 13 to the end of the vector.
    v.push_back(13);
    v.emplace_back(13); // generally faster than <push_back>

    // Add 14 to the position (start) of the vector
    v.insert(v.begin(), 10);

    // Add 14 to the position (end) of the vector
    v.insert(v.end(), 14);

    // Adds all three values at once to the end of the vector
    v.insert(v.end(), {14, 20, 25});
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Delete element from end.
    v.pop_back();
    // Clear the whole vector.
    v.clear();
    // Erases element at position 1.
    v.erase(v.begin() + 1);
    // Erases first 2 element from start.
    v.erase(v.begin(), v.begin() + 2);
    // ======================================== //
    // ======================================== //

    // ========== Getting Elements ========== //
    // Using []
    v[0];
    // Using at()
    v.at(0);
    // Returns first element value
    v.front();
    // Returns last element value
    v.back();

    // Points to the first element (1)
    vector<int> vec = {1, 2, 3};
    auto it = vec.begin();
    // Points to the last element (1)
    vector<int> vec = {1, 2, 3};
    auto it = vec.end();

    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Returns the number of elements in the vector.
    v.size();
    // Checks if the vector is empty
    v.empty(); // return true or false

    // Sorting [Time complexity:O(n log n)]
    // Ascending order (default)
    sort(vec.begin(), vec.end());
    // Descending order
    sort(vec.begin(), vec.end(), greater<int>());
    // Reverse vector
    reverse(vec.begin(), vec.end());
    // Check if vector is sorted
    bool sorted = is_sorted(v.begin(), v.end());

    // get maximum value
    int maxVal = *max_element(v.begin(), v.end());
    // get minimum value
    int minVal = *min_element(v.begin(), v.end());

    // Sum of all elements
    int total = accumulate(v.begin(), v.end(), 0);

    // Product of all elements
    int product = accumulate(v.begin(), v.end(), 1, [](int a, int b)
                             { return a * b; });

    // Rotate vector (circular shift)
    // rotates left by k positions; use reverse trick for right rotation
    int k = 4;
    rotate(v.begin(), v.begin() + k, v.end());

    // count how many times 5 appears
    int countVal = count(v.begin(), v.end(), 5);

    // Binary search (needs sorted vector) returns true if 10 exists
    bool exists = binary_search(v.begin(), v.end(), 10);

    // Iterating vectors
    // you can use <int> instead of <auto>
    for (auto num : v)
    {
        cout << num << endl;
    }

    // Swapping two vectors
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    vec1.swap(vec2); // vec1 = {4, 5, 6}, vec2 = {1, 2, 3}

    // ======================================== //
    // ======================================== //
    return 0;
}
