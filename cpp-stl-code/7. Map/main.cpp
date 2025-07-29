#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Note ======================== //
    // std::map stores key-value pairs
    // Keys are unique and sorted in ascending order by default
    // Average time complexity: O(log n) for insert/find/erase
    // ======================================== //

    // ========== Declaration ========== //

    // Empty map of int to string
    // map<key, value> m;
    map<int, int> my_map;
    map<int, string> m;

    // Map initialized with key-value pairs
    map<int, string> m1 = {
        {1, "apple"},
        {2, "banana"},
        {3, "cherry"}};

    // Copy constructor
    map<int, string> m2 = m1;

    // ======================================== //
    // ======================================== //

    // ========== Adding New Elements ========== //

    // Method 1: insert() — using pair
    m.insert({4, "date"});

    // Method 2: emplace() — constructs in-place
    m.emplace(5, "elderberry");

    // Method 3: operator[] — inserts or updates
    // If key exists, then update it otherwise, insert it
    m[6] = "fig";       // inserts new pair
    m[2] = "blueberry"; // updates value for key 2

    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //

    // Erase by key
    m.erase(4); // removes key 4

    // Removes all key-value pairs
    m.clear();

    // Erase by iterator
    auto it = m.find(3);
    if (it != m.end())
        m.erase(it); // removes key 3

    // Erase range
    auto start = m.begin();
    auto end = m.find(5); // not included
    m.erase(start, end);  // removes keys before 5
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //

    // Access using key (inserts default value if key is absent!)
    cout << m[1] << "\n"; // returns "" if key 1 not present

    // at() — throws std::out_of_range if key not found
    cout << m.at(5) << "\n";

    // find() — returns iterator to key, or end() if not found
    if (m.find(2) != m.end())
        cout << "Found key 2\n";

    // count() — returns 1 if key exists, 0 otherwise
    cout << "Count of 6: " << m.count(6) << "\n";

    // ======================================== //
    // ======================================== //

    // ========== Iterating over map ========== //

    // 🌳 NOTE: Order of output is sorted

    // 🌸 Method 1: range-based for loop
    for (auto [key, value] : m)
        cout << key << " => " << value << "\n";

    // Method 2: iterator
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->first << " -> " << it->second << "\n";

    // ======================================== //
    // ======================================== //

    // ========== Other Useful Methods ========== //

    // Check if empty
    if (m.empty())
        cout << "Map is empty\n";

    // Size of map
    cout << "Map size: " << m.size() << "\n";

    // Swap with another map
    map<int, string> m3 = {{10, "grape"}, {20, "kiwi"}};
    map<int, string> m4 = {{1, "apple"}, {2, "banana"}};
    m3.swap(m4);

    // ======================================== //
    // ======================================== //

    return 0;
}
