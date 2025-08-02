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
