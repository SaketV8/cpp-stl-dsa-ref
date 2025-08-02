<div align="center">
  <img src="./assets/CPP STL.png" alt="API Logo"/>
</div>

<h1 align="center">CPP STL DSA Reference</h1>

> [!TIP]
>
> This is not full reference for CPP STL, this doc only contains those CPP STL which are used frequently and important for DSA


## :card_index_dividers: Content

<details close>
<summary> 0. Getting Started </summary>

<h3 align="center"> ⚡ 0. Getting Started </h3>

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```
</details>
<details close>
<summary> 1. Vector </summary>

<h3 align="center"> ⚡ 1. Vector </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
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

    // 2D vector for matrices
    vector<vector<int>> mat;
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds 13 to the end of the vector.
    v.push_back(13);
    v.emplace_back(13); // generally faster than <push_back>

    // Add 14 to the position (start) of the vector
    v.insert(v.begin(), 10);
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

    // Sorting [Time complexity: O(n log n)]
    sort(vec.begin(), vec.end());

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

```
</details>
<details close>
<summary> 2. Stack </summary>

<h3 align="center"> ⚡ 2. Stack </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Declaration ========== //
    // Creates an empty stack of integers.
    stack<int> st;
    // Creates an empty stack of strings.
    stack<string> st_str;
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds 23 to the top of the stack.
    st.push(23);
    // Adds 34 to the top of the stack (alternative to push()).
    st.emplace(34);
    // Emplace is slightly more efficient as it constructs the element in-place.
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Removes the top element from the stack.
    st.pop();
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Returns the top element of the stack.
    int top_element = st.top();
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Checks if the stack is empty.
    st.empty(); // Returns true or false.
    // Returns the number of elements in the stack.
    st.size();

    // Swapping two stacks.
    stack<int> st2;
    st2.swap(st); // Swaps the elements of st and st2.
    // ======================================== //

    // ========== Iterating Through Stack ========== //
    // Iterates through the stack and prints elements.
    // Note: Direct indexing is not allowed in stacks.
    while (!st.empty())
    {
        // Prints the top element of the stack.
        std::cout << st.top() << std::endl;
        // Removes the top element from the stack.
        st.pop();
    }
    // ======================================== //

    return 0;
}
```
</details>
<details close>
<summary> 3. Queue </summary>

<h3 align="center"> ⚡ 3. Queue </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principal ========== //
    // FIFO --> First In First Out
    // ======================================== //
    // ======================================== //

    // ========== Declaration ========== //
    // Creates an empty queue of integers.
    queue<int> que;
    // Creates an empty queue of strings.
    queue<string> que_str;
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    // Adds 1 at the end of the queue.
    que.push(1);
    que.push(2);
    // (alternative to push()).
    que.emplace(3); // generally faster than <push>
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Removes the front element from the queue.
    que.pop();
    // Clear the whole queue.
    while (!que.empty())
    {
        que.pop();
    }
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Returns the front element of the queue.
    int front_element = que.front();
    // Returns the back/end element of the queue.
    int back_element = que.back();
    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Checks if the queue is empty.
    que.empty(); // Returns true or false.
    // Returns the number of elements in the queue.
    que.size();

    // Copying the queue to another queue
    queue<int> tmp_que = que;

    // Swapping two queues.
    queue<int> que2;
    que2.swap(que); // Swaps the elements of que and que2.
    // ======================================== //
    // ======================================== //

    // ========== Iterating Through Queue ========== //
    // Iterates through the queue and prints elements.
    // Note: Direct indexing is not allowed in queues.
    while (!que.empty())
    {
        // Prints the front element of the queue.
        std::cout << que.front() << std::endl;
        // Removes the front element from the queue.
        que.pop();
    }

    // RECOMMENDED METHOD FOR INTERATING:
    std::queue<int> temp = que; // Copy the original queue
    // so that original queue remain same, for future reference
    // but to <reduce time complexity> you can use above method :)
    while (!temp.empty())
    {
        std::cout << temp.front() << " ";
        temp.pop();
    }
    // ======================================== //
    // ======================================== //

    return 0;
}
```
</details>
<details close>
<summary> 4. Priority-Queue </summary>

<h3 align="center"> ⚡ 4. Priority-Queue </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principle ========== //
    // Max-Heap by default: Largest element at the top
    // ======================================== //
    // ======================================== //

    // ========== Declaration ========== //
    // Max-Heap (default)
    priority_queue<int> max_pq;

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> min_pq;

    // Max-Heap for strings (lexicographical)
    priority_queue<string> str_pq;
    // ======================================== //
    // ======================================== //

    // ========== Adding Elements ========== //
    max_pq.push(10);
    max_pq.push(30);
    max_pq.emplace(20); // Generally faster than push
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Removes the top (largest) element.
    max_pq.pop();
    // Clear the entire priority_queue.
    while (!max_pq.empty())
    {
        max_pq.pop();
    }
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Returns the top element (max for max-heap, min for min-heap).
    int top_element = max_pq.top();
    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Check if the priority_queue is empty.
    max_pq.empty(); // Returns true or false.
    // Returns the number of elements in the queue.
    max_pq.size();

    // Copying to another priority_queue
    priority_queue<int> temp_pq = max_pq;

    // Swapping two priority_queues
    priority_queue<int> another_pq;
    another_pq.swap(max_pq);
    // ======================================== //
    // ======================================== //

    // ========== Iterating Through Priority Queue ========== //
    // NOTE: No direct indexing
    // So we copy and iterate

    std::priority_queue<int> pq_copy = max_pq;
    while (!pq_copy.empty())
    {
        std::cout << pq_copy.top() << " ";
        pq_copy.pop();
    }
    std::cout << std::endl;

    // For min-heap
    min_pq.push(5);
    min_pq.push(1);
    min_pq.push(3);

    std::priority_queue<int, vector<int>, greater<int>> min_copy = min_pq;
    while (!min_copy.empty())
    {
        std::cout << min_copy.top() << " ";
        min_copy.pop();
    }
    std::cout << std::endl;

    // ======================================== //
    // ======================================== //

    return 0;
}
```
</details>
<details close>
<summary> 5. Set </summary>

<h3 align="center"> ⚡ 5. Set </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ========== Note ========== //
    // std::set is always sorted in ascending order by default.

    // ========== Declaration ========== //
    // Creates an empty set of integers.
    set<int> s;
    // Creates an empty set of string.
    set<string> s;
    // Creates a set containing {5, 20, 60}.
    set<int> s{5, 20, 60};
    // Creates a set containing {5, 20, 60}.
    set<int> s = {5, 20, 60};
    // ======================================== //
    // ======================================== //

    // ========== Adding New Elements ========== //
    // Adds 13 to the set.
    s.insert(13);
    s.emplace(14);
    // For int, insert() and emplace() are effectively the same.

    // emplace_hint will insert 20 after 10
    auto it = s.find(10);
    s.emplace_hint(it, 20); // Hint: insert near 10
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Delete element from the set.
    s.erase(10);
    
    // Removes all elements.
    s.clear();

    // Erases element by range
    // {10, 20, 30, 40, 50}
    auto start = s.find(20);
    auto end = s.find(50);
    s.erase(start, end); // removes 20, 30, 40
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // find(value)	Returns iterator to element or end() if not found.
    auto it = s.find(20);
    if (it != s.end())
        std::cout << "Found: " << *it << "\n";
    else
        std::cout << "Not found\n";

    // count(value)	Returns 0 or 1 (since set stores unique elements).
    std::cout << "Count of 2: " << s.count(2) << "\n";

    // contains(value)	Returns true if value exists
    // #### (C++20+).
    // if (s.contains(200))
    //     std::cout << "Set contains 200\n";

    // Points to the first element in the set
    // begin() gives an iterator to the smallest element.
    if (!s.empty())
        std::cout << "First element: " << *s.begin() << "\n";

    // rbegin() start reverse of begin() ==> return last element (largest one as set is sorted by default)
    if (!s.empty())
        std::cout << "First element: " << *s.rbegin() << "\n";

    // ======================================== //
    // ======================================== //

    // ========== Other Important Methods ========== //
    // Returns the number of elements in the set.
    s.size();

    // Checks if the set is empty
    s.empty(); // return true or false

    // Iterating set
    // you can use <int> instead of <auto>
    // 🌸 Method 1:
    for (auto num : s)
        cout << num << endl;

    // Method 2:
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    // Swapping two sets
    set<int> set2 = {4, 5, 6};
    set<int> set1 = {1, 2, 3};
    set1.swap(set2); // set1 = {4, 5, 6}, set2 = {1, 2, 3}

    // ======================================== //
    // ======================================== //
    return 0;
}

```
</details>
<details close>
<summary> 6. Unordered-Set </summary>

<h3 align="center"> ⚡ 6. Unordered-Set </h3>

```cpp
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

```
</details>
<details close>
<summary> 7. Map </summary>

<h3 align="center"> ⚡ 7. Map </h3>

```cpp
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

```
</details>
<details close>
<summary> 8. Unordered-Map </summary>

<h3 align="center"> ⚡ 8. Unordered-Map </h3>

```cpp
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

```
</details>
<details close>
<summary> 9. Deque </summary>

<h3 align="center"> ⚡ 9. Deque </h3>

```cpp
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

```
</details>
<details close>
<summary> 10. Pair </summary>

<h3 align="center"> ⚡ 10. Pair </h3>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Declaration ========== //
    // Simple pair of int and int
    pair<int, int> p1 = {1, 2};

    // Pair of int and string
    pair<int, string> p2 = {10, "hello"};

    // Using make_pair
    pair<char, double> p3 = make_pair('A', 3.14);

    // Nested pair
    pair<int, pair<int, int>> p4 = {1, {2, 3}};

    // Pair of pair
    pair<pair<int, int>, pair<int, int>> p5 = {{1, 2}, {3, 4}};
    //   (1)👆           (2)👆

    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Using first and second
    cout << p1.first << " " << p1.second << endl;

    cout << p2.first << " " << p2.second << endl;

    // Accessing nested pair elements
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;

    // Accessing deeply nested pair
    cout << p5.first.first << " " << p5.first.second << " ";
    cout << p5.second.first << " " << p5.second.second << endl;

    // ======================================== //
    // ======================================== //

    // ========== Pair Array ========== //
    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }

    // Vector of pairs
    vector<pair<int, int>> vp;
    vp.push_back({10, 20});
    // both are same 👆 👇
    vp.emplace_back(30, 40);

    for (auto pr : vp)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    // ======================================== //
    // ======================================== //

    // ========== Swapping Pairs ========== //
    pair<int, int> a = {1, 2}, b = {3, 4};
    swap(a, b); // Now a = {3, 4}, b = {1, 2}

    cout << a.first << " " << a.second << endl;
    cout << b.first << " " << b.second << endl;

    // ======================================== //
    // ======================================== //

    return 0;
}

```
</details>
<details close>
<summary> 11. List </summary>

<h3 align="center"> ⚡ 11. List </h3>

```cpp
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

```
</details>


<!-- ## :memo: Todo -->
## :seedling: Todo

- [ ] ~~Getting started with cpp [will be added later]~~
- [x] Vector
- [x] Stack
- [x] Queue
- [x] Priority-Queue
- [x] Set
- [x] Unordered-Set
- [x] Map
- [x] Unordered-Map
- [x] Deque
- [x] Pair
- [x] List

> [!WARNING]
>
> The order may vary, and I will add some other STL components in the future.

## :hugs: Contributing
kindly refer to [CONTRIBUTING.md](./CONTRIBUTING.md)

## :compass: About
This project was created to serve as a quick reference for C++ STL while solving DSA problems. Over time, you may no longer need it.

![Status](https://img.shields.io/badge/Status%20-In%20Development%20-FFD700?style=for-the-badge)

![About Author](https://img.shields.io/badge/Created%20by-%20Saket%20Maurya-f5a97f?style=for-the-badge)

## :label: Attribution

C++ STL Poster created by - [artinwve](https://www.instagram.com/artinwve/)