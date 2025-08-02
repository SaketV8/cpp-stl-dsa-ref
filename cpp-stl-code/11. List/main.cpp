#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principle ========== //
    // Doubly linked list — each node points to previous and next.
    // Allows O(1) insertion/deletion anywhere (with iterator).
    // No random access (no []), traversal is linear.
    // Extra memory used due to pointer overhead.
    // ======================================== //
    // ======================================== //

    // ========== Declaration ========== //
    // Creates an empty list of integers.
    list<int> l;
    // Creates a list with 5 elements, all initialized to 10.
    list<int> l1(5, 10);
    // Initializes list with given values.
    list<int> l2 = {1, 2, 3, 4, 5};
    // Copies all elements from l2 to l3.
    list<int> l3(l2);
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds to the end of the list.
    l.push_back(10);
    l.emplace_back(20); // slightly faster
    // Adds to the front of the list.
    l.push_front(5);
    l.emplace_front(1);
    // Inserts 100 at second position (after first element)
    auto it = l.begin();
    ++it;
    l.insert(it, 100);
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Removes element from the end.
    l.pop_back();
    // Removes element from the front.
    l.pop_front();
    // Erases element at iterator position.
    it = l.begin();
    advance(it, 2); // move iterator 2 steps ahead
    l.erase(it);
    // Clears the whole list.
    l.clear();
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // 🌳 NOTE: No [] operator in list (unlike vector)
    // You must use iterators to access elements.
    list<int> l4 = {10, 20, 30};
    auto itr = l4.begin();
    cout << *itr << endl; // prints first element

    // Access front and back elements
    l4.front(); // returns first element
    l4.back();  // returns last element
    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Returns size of the list
    l.size();
    // Checks if list is empty
    l.empty(); // returns true or false

    // Remove all occurrences of a value
    l2.remove(3); // removes all 3s

    // Sorting (O(n log n) time)
    l2.sort();

    // Reversing list
    l2.reverse();

    // Removing duplicates (consecutive)
    l2.unique();

    // Swapping two lists
    list<int> a = {1, 2, 3};
    list<int> b = {4, 5};
    a.swap(b); // a = {4, 5}, b = {1, 2, 3}

    // Merging two sorted lists
    list<int> l5 = {1, 3, 5};
    list<int> l6 = {2, 4, 6};
    l5.merge(l6); // l5 = {1, 2, 3, 4, 5, 6}

    // ======================================== //
    // ======================================== //

    // ========== Iterating through List ========== //
    for (auto val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    // Using iterator
    for (auto it = l2.begin(); it != l2.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // ======================================== //
    // ======================================== //

    return 0;
}
