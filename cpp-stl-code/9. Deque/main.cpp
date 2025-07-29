#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principal ========== //
    // Double Ended Queue — insertion & deletion at both ends
    // Average time complexity: O(1) for pop_front(), pop_back()
    // Average time complexity: O(1) (amortized) for push_front(), push_back()
    // 🌳 Amortized – Average Constant Time (Sometimes More Costly)
    // ======================================== //
    // ======================================== //

    // ========== Declaration ========== //
    // Creates an empty deque of integers.
    deque<int> dq;
    // Creates an empty deque of strings.
    deque<string> dq_str;
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds elements at the back.
    dq.push_back(10);
    dq.push_back(20);

    // Adds elements at the front.
    dq.push_front(5);

    // emplace is generally faster than push.
    dq.emplace_back(30);
    dq.emplace_front(1);
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Removes element from the back.
    dq.pop_back();
    // Removes element from the front.
    dq.pop_front();

    // Clear entire deque
    dq.clear();
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Get front element.
    int front_element = dq.front();
    // Get back element.
    int back_element = dq.back();
    // Get element at specific index.
    int second_element = dq[1];   // no bounds check
    int third_element = dq.at(2); // throws exception on invalid index
    // ======================================== //
    // ======================================== //

    // ========== Other Useful Methods ========== //
    // Check if deque is empty.
    dq.empty(); // returns true or false

    // Get number of elements.
    dq.size();

    // Resize deque
    dq.resize(5); // if current size < 5, fills with 0 (or default for type)

    // Insert at specific position
    dq.insert(dq.begin() + 1, 99); // insert 99 at index 1

    // Erase element at specific position
    dq.erase(dq.begin() + 2); // removes element at index 2

    // Swap with another deque
    deque<int> dq2 = {100, 200};
    dq.swap(dq2);
    // ======================================== //
    // ======================================== //

    // ========== Iterating Through Deque ========== //

    // Using index (random access is allowed in deque)
    for (int i = 0; i < dq.size(); ++i)
        cout << dq[i] << " ";

    // Using range-based for loop
    for (int x : dq)
        cout << x << " ";

    // Using iterator
    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << *it << " ";

    // other method (not recommended)
    std::deque<int> temp = dq; // Copy the original queue
    while (!temp.empty())
    // but to <reduce time complexity> you can use above method :)
    {
        std::cout << temp.front() << " ";
        temp.pop_front();
    }

    // ======================================== //
    // ======================================== //

    return 0;
}
