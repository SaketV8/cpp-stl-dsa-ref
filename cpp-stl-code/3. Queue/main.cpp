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