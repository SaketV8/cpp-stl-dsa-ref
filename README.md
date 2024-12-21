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


<!-- ## :memo: Todo -->
## :seedling: Todo

- [ ] ~~Getting started with cpp [will be added later]~~
- [x] Vector
- [ ] Stack
- [ ] Deque
- [ ] priority_queue
- [ ] set
- [ ] unordered_set
- [ ] map
- [ ] unordered_map
- [ ] multimap

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