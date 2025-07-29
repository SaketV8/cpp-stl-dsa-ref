#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Note ======================== //
    // std::unordered_map stores key-value pairs
    // Keys are unique, but not sorted (hashed storage)
    // Average time complexity: O(1) for insert/find/erase
    // ======================================== //

    // ========== Declaration ========== //

    // Empty unordered_map of int to string
    unordered_map<int, string> um;

    // Initialized with key-value pairs
    unordered_map<int, string> um1 = {
        {1, "apple"},
        {2, "banana"},
        {3, "cherry"}};

    // Copy constructor
    unordered_map<int, string> um2 = um1;

    // ======================================== //
    // ======================================== //

    // ========== Adding New Elements ========== //

    // Method 1: insert() — using pair
    um.insert({4, "date"});

    // Method 2: emplace() — constructs in-place
    um.emplace(5, "elderberry");

    // Method 3: operator[] — inserts or updates
    um[6] = "fig";       // inserts new pair
    um[2] = "blueberry"; // updates value for key 2

    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //

    // Erase by key
    um.erase(4); // removes key 4

    // Removes all key-value pairs
    um.clear();

    // Erase by iterator
    auto it = um.find(3);
    if (it != um.end())
        um.erase(it); // removes key 3

    // 🌸 Range erase is not available in <unordered_map> like <map>
    // auto start = m.begin();
    // auto end = m.find(5); // not included
    // m.erase(start, end);  // removes keys before 5
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //

    // Access using key (inserts default value if key is absent)
    cout << um[1] << "\n"; // returns "" if key 1 not present

    // at() — throws std::out_of_range if key not found
    try {
        cout << um.at(5) << "\n";
    } catch (out_of_range &e) {
        cout << "Key 5 not found\n";
    }

    // find() — returns iterator to key, or end() if not found
    if (um.find(2) != um.end())
        cout << "Found key 2\n";

    // count() — returns 1 if key exists, 0 otherwise
    cout << "Count of 6: " << um.count(6) << "\n";

    // ======================================== //
    // ======================================== //

    // ========== Iterating over unordered_map ========== //
    
    // 🌳 NOTE: Order of output is not sorted

    // 🌸 Method 1: range-based for loop
    for (auto [key, value] : um)
        cout << key << " => " << value << "\n";

    // Method 2: iterator
    for (auto it = um.begin(); it != um.end(); ++it)
        cout << it->first << " -> " << it->second << "\n";


    // ======================================== //
    // ======================================== //

    // ========== Other Useful Methods ========== //

    // Check if empty
    if (um.empty())
        cout << "Map is empty\n";

    // Size of unordered_map
    cout << "Map size: " << um.size() << "\n";

    // Swap with another unordered_map
    unordered_map<int, string> um3 = {{10, "grape"}, {20, "kiwi"}};
    unordered_map<int, string> um4 = {{1, "apple"}, {2, "banana"}};
    um3.swap(um4);

    // ======================================== //
    // ======================================== //
    
    // 🌳 NOTE: For now, not so important for DSA

    // ========== Unordered_map-specific features ========== //
    
    // Load factor — average elements per bucket
    cout << "Load factor: " << um.load_factor() << "\n";

    // Bucket count — total number of buckets
    cout << "Bucket count: " << um.bucket_count() << "\n";

    // Bucket access (for internal layout understanding)
    for (size_t i = 0; i < um.bucket_count(); ++i) {
        cout << "Bucket #" << i << " contains: ";
        for (auto it = um.begin(i); it != um.end(i); ++it) {
            cout << "{" << it->first << "," << it->second << "} ";
        }
        cout << "\n";
    }

    // ======================================== //

    return 0;
}
