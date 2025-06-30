#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ========== Note ========== //
    // std::unordered_set is not sorted, elements have no fixed order

    // ========== Declaration ========== //
    // Creates an empty unordered_set of integers.
    unordered_set<int> s;
    // Creates an empty unordered_set of string.
    unordered_set<string> s;
    // Creates a unordered_set containing {5, 20, 60}.
    unordered_set<int> s{5, 20, 60};
    // Creates a unordered_set containing {5, 20, 60}.
    unordered_set<int> s = {5, 20, 60};
    // ======================================== //
    // ======================================== //

    // ========== Adding New Elements ========== //
    // Adds 13 to the unordered_set;.
    s.insert(13);
    s.emplace(14);
    // For int, insert() and emplace() are effectively the same.

    // emplace_hint will insert 20 after 10
    // auto it = s.find(10);
    // s.emplace_hint(it, 20);
    // No emplace_hint() in unordered_set

    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Delete element from the unordered_set.
    s.erase(10);

    // Removes all elements.
    s.clear();

    // Erases element by range
    // {10, 20, 30, 40, 50}
    auto start = s.find(20);
    auto end = s.find(50);
    s.erase(start, end); // removes 20, 30, 40
    // Order is undefined, but range erase still works based on iterators.

    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // find(value)	Returns iterator to element or end() if not found.
    auto it = s.find(20);
    if (it != s.end())
        std::cout << "Found: " << *it << "\n";
    else
        std::cout << "Not found\n";

    // count(value)	Returns 0 or 1 (since unordered_set  stores unique elements).
    std::cout << "Count of 2: " << s.count(2) << "\n";

    // contains(value)	Returns true if value exists
    // #### (C++20+).
    // if (s.contains(200))
    //     std::cout << "Unordered Set contains 200\n";

    // Points to the first element in the case of set
    // but for unordered_set
    // begin() not gives "first" in any order (asc or desc)
    if (!s.empty())
        std::cout << "Some element: " << *s.begin() << "\n";

    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Returns the number of elements in the unordered_set.
    s.size();

    // Checks if the unordered_set is empty
    s.empty(); // return true or false

    // Iterating unordered_set
    // you can use <int> instead of <auto>
    // 🌸 Method 1:
    for (auto num : s)
        cout << num << endl;

    // Method 2:
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    // Swapping two unordered_sets
    unordered_set<int> set1 = {1, 2, 3};
    unordered_set<int> set2 = {4, 5, 6};
    set1.swap(set2); // set1 = {4, 5, 6}, set2 = {1, 2, 3}

    // ======================================== //
    // ======================================== //
    return 0;
}
