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