#include <bits/stdc++.h>
using namespace std;

int main() {

  // ========== Note ========== //
  // std::multiset is always sorted in ascending order by default.
  // Unlike set, multiset ALLOWS duplicate elements.

  // ========== Declaration ========== //
  // Creates an empty multiset of integers.
  multiset<int> ms;

  // Creates an empty multiset of strings.
  multiset<string> ms2;

  // Creates a multiset containing {5, 20, 60}.
  multiset<int> ms3{5, 20, 60};

  // Creates a multiset containing duplicates.
  multiset<int> ms4 = {5, 20, 20, 60};
  // ======================================== //
  // ======================================== //

  // ========== Adding New Elements ========== //
  ms.insert(10);
  ms.insert(10); // duplicates allowed
  ms.emplace(20);

  // emplace_hint inserts near the hint position
  auto it = ms.find(10);
  ms.emplace_hint(it, 15);

  // ======================================== //
  // ======================================== //

  // ========== Deleting Elements ========== //
  // Erases ALL occurrences of 10
  ms.erase(10);

  // Erase a single occurrence using iterator
  auto itr = ms.find(20);
  if (itr != ms.end())
    ms.erase(itr);

  // Removes all elements
  ms.clear();

  // Erase by range
  // {10, 10, 20, 30, 40, 50}
  auto start = ms.find(20);
  auto end = ms.find(50);
  ms.erase(start, end); // removes 20, 30, 40

  // ======================================== //
  // ======================================== //

  // ========== Accessing Elements ========== //
  // find(value) returns iterator to ONE occurrence
  auto it2 = ms.find(20);
  if (it2 != ms.end())
    cout << "Found: " << *it2 << "\n";
  else
    cout << "Not found\n";

  // count(value) returns number of occurrences
  cout << "Count of 10: " << ms.count(10) << "\n";

  // lower_bound(x) -> first element >= x
  // upper_bound(x) -> first element > x
  auto lb = ms.lower_bound(10);
  auto ub = ms.upper_bound(10);

  // equal_range(x) -> pair of (lower_bound, upper_bound)
  auto range = ms.equal_range(10);

  // ======================================== //
  // ======================================== //

  // ========== First & Last Element ========== //
  if (!ms.empty())
    cout << "First element: " << *ms.begin() << "\n";

  if (!ms.empty())
    cout << "Last element: " << *ms.rbegin() << "\n";

  // ======================================== //
  // ======================================== //

  // ========== Other Important Methods ========== //
  // Number of elements (including duplicates)
  cout << "Size: " << ms.size() << "\n";

  // Check empty
  if (ms.empty())
    cout << "Multiset is empty\n";

  // ======================================== //
  // ======================================== //

  // ========== Iterating Multiset ========== //
  // Method 1: Range-based loop
  for (auto num : ms)
    cout << num << " ";
  cout << "\n";

  // Method 2: Iterator-based
  for (auto it = ms.begin(); it != ms.end(); it++)
    cout << *it << " ";
  cout << "\n";

  // ======================================== //
  // ======================================== //

  // ========== Swapping Multisets ========== //
  multiset<int> msA = {1, 2, 2, 3};
  multiset<int> msB = {4, 5};

  msA.swap(msB);
  // msA = {4, 5}
  // msB = {1, 2, 2, 3}

  // ======================================== //
  // ======================================== //

  // ========== Custom Order (Descending) ========== //
  multiset<int, greater<int>> msDesc = {10, 5, 20, 20};

  for (auto x : msDesc)
    cout << x << " ";
  cout << "\n";

  // ======================================== //
  // ======================================== //

  return 0;
}