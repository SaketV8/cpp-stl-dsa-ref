#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ========== Working Principle ========== //
    // std::string is a dynamic array of characters.
    // Supports O(1) random access via index.
    // Can be concatenated, compared, and searched efficiently.
    // Strings automatically grow as needed.
    // ======================================== //
    // ======================================== //

    // ========== Declaration & Initialization ========== //
    // Empty string
    string s1;
    // Initialized with literal
    string s2("Hello");
    // Copy initialization
    string s3 = "World";
    // Copy constructor
    string s4(s2);
    // Repeat 'A' 5 times
    string s5(5, 'A');
    // Range constructor
    // Copies all elements from s2 to s6.
    string s6(s2.begin(), s2.end());

    // vector of strings
    // 3 strings, all "abc"
    vector<string> strMat(3, "abc");
    // ======================================== //
    // ======================================== //

    // ========== Adding / Modifying Elements ========== //
    // Append a character
    s1.push_back('H');
    // Append character
    s1 += 'i';
    // Append string
    s1 += " there!";
    // Append string
    s1.append(" Welcome");
    // Insert at position
    s1.insert(2, " INSERTED ");
    // Insert another string
    s1.insert(0, s2);
    // Replace first 2 chars
    s1.replace(0, 2, "Hi");
    // Resize string to length 10, fill with 'x'
    s1.resize(10, 'x');
    // Reduce capacity to fit size
    s1.shrink_to_fit();
    // ======================================== //
    // ======================================== //

    // ========== Deleting Elements ========== //
    // Remove last character
    s1.pop_back();
    // Erase 5 chars from index 2
    s1.erase(2, 5);
    // Clear entire string
    s1.clear();
    // Remove first occurrence of substring
    size_t pos = s1.find("Hi");
    if (pos != string::npos)
        s1.erase(pos, 2);
    // ======================================== //
    // ======================================== //

    // ========== Accessing Elements ========== //
    // Using []
    char ch = s2[0];
    // Using at()
    char ch2 = s2.at(1);
    // First character
    char first = s2.front();
    // Last character
    char last = s2.back();
    // Iterators
    auto it = s2.begin();
    auto itEnd = s2.end();
    // Reverse iterator
    auto rit = s2.rbegin();
    auto ritEnd = s2.rend();
    // ======================================== //
    // ======================================== //

    // ========== Size & Capacity ========== //
    // Length
    size_t len = s2.size();
    // Same as size()
    size_t len2 = s2.length();
    // Check if empty
    bool emptyStr = s2.empty();
    // Allocated memory
    size_t cap = s2.capacity();
    // Preallocate space
    s2.reserve(50);
    // ======================================== //
    // ======================================== //

    // ========== Substring & Comparison ========== //
    // Substring from index 1, length 3
    string sub = s2.substr(1, 3);
    // Compare with s3 (-1,0,1)
    int cmp1 = s2.compare(s3);
    // Compare first 2 chars
    int cmp2 = s2.compare(0, 2, s3);
    // Compare with literal
    int cmp3 = s2.compare("Hello");
    // ======================================== //
    // ======================================== //

    // ========== Conversion ========== //
    // int -> string
    string numStr = to_string(123);
    // string -> int
    int num = stoi("456");
    // string -> long long
    long long big = stoll("123456789");
    // string -> double
    double d = stod("3.14");
    // string -> float
    float f = stof("2.71");
    // ======================================== //
    // ======================================== //

    // ========== Iteration & Traversal ========== //
    // Method 1
    for (char c : s2)
        cout << c << " ";
    cout << endl;

    // Method 2
    for (int i = 0; i < s2.size(); i++)
        cout << s2[i] << " ";

    // Method 3
    for (auto it = s2.begin(); it != s2.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Method 4
    for (auto rit = s2.rbegin(); rit != s2.rend(); ++rit)
        cout << *rit << " ";
    cout << endl;
    // ======================================== //
    // ======================================== //

    // ========== Sorting & Reversing ========== //
    // Sort characters
    // Ascending order (default)
    sort(s2.begin(), s2.end());
    // Descending order
    sort(s2.begin(), s2.end(), greater<int>());
    
    // Reverse string
    reverse(s2.begin(), s2.end());
    // Check if sorted
    bool sorted = is_sorted(s2.begin(), s2.end());
    // Count occurrences
    int countL = count(s2.begin(), s2.end(), 'l');
    // ======================================== //
    // ======================================== //

    // ========== Concatenation & Swap ========== //
    string s7 = s2 + " " + s3; // Concatenation
    s2.append(s3);             // Append
    string a = "Hello", b = "World";
    a.swap(b); // Swap strings
    // ======================================== //
    // ======================================== //

    // ========== Searching & Finding ========== //
    // First occurrence
    size_t f1 = s2.find("ell");
    // Last occurrence
    size_t f2 = s2.rfind("l");
    // First 'l' or 'o'
    size_t f3 = s2.find_first_of("lo");
    // Last 'l' or 'o'
    size_t f4 = s2.find_last_of("lo");
    // First char not in set
    size_t f5 = s2.find_first_not_of("Helo");
    // Last char not in set
    size_t f6 = s2.find_last_not_of("Helo");
    // Check existence
    bool found = (f1 != string::npos);
    // ======================================== //
    // ======================================== //

    return 0;
}
