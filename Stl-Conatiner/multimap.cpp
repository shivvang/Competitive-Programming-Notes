#include <iostream>
#include <map>
using namespace std;

int main(){
    /*
    🔥 Multimap (Implemented using Red-Black Tree)
    - Similar to `map`, but allows **duplicate keys**.
    - **Insertion, Deletion, and Search: O(log N)**.
    - Stores elements **in sorted order (by key)**.

    📌 When to use `multimap`?
    - When **multiple values** need to be stored for a **single key**.
    - When we **want sorted access** (if order doesn’t matter, prefer `unordered_multimap`).
    
    🚀 Where is `multimap` used?
    - **Handling duplicate keys in a sorted manner**.
    - **Grouping values under the same key** (e.g., storing names under each letter).
    - **When frequency counts are needed but with ordered access**.
    */

    multimap<char, string> mpp;

    int n;
    cin >> n; // Number of elements to insert

    // 🔹 Insert elements into multimap
    for (int i = 0; i < n; i++) {
        char ch;
        string s;
        cin >> ch >> s;
        mpp.insert(make_pair(ch, s)); // Multiple values can be inserted under the same key
    }

    cout << endl;

    // 🔹 Iterating through the multimap (always ordered)
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // 🔹 Finding a range of values for a key range using `lower_bound()` & `upper_bound()`
    auto it2 = mpp.lower_bound('b'); // First element with key ≥ 'b'
    auto it3 = mpp.upper_bound('d'); // First element with key > 'd'

    cout << "\nElements in range [b, d]:\n";
    for (auto it4 = it2; it4 != it3; it4++) {
        cout << it4->first << " " << it4->second << endl;
    }

    // 🔹 Find() returns the **first occurrence** of the key
    auto kyamilega = mpp.find('b');

    if (kyamilega != mpp.end()) {
        cout << "\nFirst occurrence of 'b': " << kyamilega->first << " " << kyamilega->second << endl;
    } else {
        cout << "\nKey 'b' not found" << endl;
    }

    return 0;
}


// ✅ Why use multimap?

// Allows multiple values for the same key.
// Maintains sorted order (unlike unordered_multimap).
// Supports range-based queries (lower_bound() & upper_bound()).
// ✅ When NOT to use multimap?

// If only unique keys are needed (use map instead).
// If order doesn’t matter, prefer unordered_multimap for O(1) operations.
// ✅ Where is it used in CP?

// Sorting problems with duplicate values under the same key.
// Range queries when multiple values exist for a key (e.g., interval problems).
// Handling group-based categorization (e.g., grouping names by first letter).
// Dijkstra’s Algorithm (alternative way to store graph edges).
