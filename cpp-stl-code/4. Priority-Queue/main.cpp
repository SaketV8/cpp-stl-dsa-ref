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