#include <iostream>
#include <set>
using namespace std;

// A multiset is an ordered associative container that allows duplicate elements and stores them in sorted order using a Red-Black Tree (Self-Balancing BST).

typedef multiset<int>::iterator It;

int main() {
    int arr[] = {10, 20, 30, 20, 10, 10, 30, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    multiset<int> m(arr, arr + n); // Initialize from array

    // 🔹 Erase all occurrences of a value (O(log N))
    m.erase(20); // Removes ALL occurrences of 20

    // 🔹 Iterate and print (O(N))
    cout << "Elements in multiset: ";
    for (int x : m) {
        cout << x << " ";
    }
    cout << endl;

    // 🔹 Count occurrences of a value (O(log N))
    cout << "Count of 10: " << m.count(10) << endl;

    // 🔹 Find a specific element (O(log N))
    auto it = m.find(30); // Returns an iterator to first occurrence of 30
    if (it != m.end()) cout << "Found element: " << *it << endl;

    // 🔹 Get all occurrences of a specific value using `equal_range()`
    pair<It, It> range = m.equal_range(30);
    cout << "All occurrences of 30: ";
    for (auto it = range.first; it != range.second; it++) {
        cout << *it << " ";
    }
    cout << endl;

    // 🔹 Get range using `lower_bound()` (>=) and `upper_bound()` (>)
    cout << "Elements between 10 and 80: ";
    for (auto it = m.lower_bound(10); it != m.upper_bound(80); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}


// 🔹 Why Use multiset?
// ✅ Allows Duplicate Elements – Unlike set, it stores multiple occurrences of the same value.
// ✅ Auto-Sorted – Always maintains elements in ascending order (default).
// ✅ Efficient Operations – O(log N) for insertion, deletion, and search.
// ✅ Use Cases – Useful when counting occurrences of elements efficiently, frequency analysis, and sorted duplicate storage.



// 🔥 Time Complexity of multiset Operations
// Operation	Complexity
// Insertion	O(log N)
// Deletion	O(log N)
// Search	O(log N)
// Iteration	O(N)

// 🔥 Key Features of multiset

// 1️⃣ Allows Duplicate Elements – Unlike set, multiset allows multiple occurrences of the same value.
// 2️⃣ Sorted Order – Elements are always sorted in ascending order.
// 3️⃣ Efficient Search & Delete – O(log N) using binary search tree (BST).
// 4️⃣ Associative Container – Elements are accessed by value, not by index.
// 5️⃣ Iterator Support – Supports begin(), end(), lower_bound(), upper_bound(), and equal_range().

// 🔥 When to Use multiset?

// Need to Store Duplicate Elements – Unlike set, it allows repetitions.
// Need Sorted Order – If retrieval in ascending order is required.
// Efficient Frequency Counting – Counting occurrences using count().
// Range Queries – Using lower_bound() and upper_bound().
// Efficient Removal of Specific Values – Unlike unordered_multiset, which has O(N), here deletion is O(log N).

// 🔥 multiset vs. unordered_multiset – Which One to Choose?
// Feature	multiset (Ordered)	unordered_multiset
// Storage	BST (Red-Black Tree)	Hash Table
// Insertion	O(log N)	O(1) avg, O(N) worst-case
// Deletion	O(log N)	O(1) avg, O(N) worst-case
// Search	O(log N)	O(1) avg, O(N) worst-case
// Sorted	✅ Yes	❌ No
// Best Use Case	Sorted duplicate elements	Fast duplicate lookups

// 🔥 Key Takeaways

// ✔ Use multiset when:

// You need to store duplicates in sorted order.
// You need to perform frequency analysis efficiently.
// You need range-based queries like lower_bound() and upper_bound().
// ✔ Use unordered_multiset when:

// Order doesn’t matter, but fast insert/search/delete is needed.
// You need O(1) operations (on average).
// Hash collisions are rare (works well with simple data types).

// 🔥 Real-World Use Cases

// 🔹 Counting Word Frequencies in a Dictionary
// 🔹 Keeping Track of Scores in a Game
// 🔹 Efficiently Removing All Occurrences of an Element
// 🔹 Finding the Most Frequent Elements in a Dataset

