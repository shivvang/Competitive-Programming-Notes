#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    /*
    🔥 Ordered Map (Implemented using Red-Black Tree)
    - Stores key-value pairs **in sorted order (by key)**.
    - **Insertion, Deletion, and Search: O(log N)** (due to self-balancing BST).
    - Slower than `unordered_map` but maintains order.

    📌 When to use `map`?
    - When **order matters** (e.g., lexicographic sorting of keys).
    - When we need **lower bound and upper bound operations**.
    - When **storing key-value pairs that require sorted access**.

    🚀 Where is `map` used?
    - **Ordered frequency counting** (e.g., words appearing in sorted order).
    - **Sorting keys dynamically** (e.g., keeping track of ranks, logs).
    - **Set-like behavior with values** (ordered unique elements with values).
    */

    map<string, int> mpp;

    // 🔹 Insert elements into the map (sorted order)
    mpp.insert(make_pair("Something", 200)); // Using make_pair()

    pair<string, int> p;
    p.first = "Competitive Programming";
    p.second = 100;
    mpp.insert(p); // Inserting using a pair object

    mpp["Dsa"] = 25000; // Direct assignment (creates key if it doesn't exist)

    // 🔹 Updating a map value
    mpp["Something"] += 11; // Increments existing value (211 now)

    // 🔹 Searching inside the map
    string something;
    cin >> something; // Input key to search

    auto it = mpp.find(something); // find() returns an iterator if found, else mpp.end()

    if (it != mpp.end()) {
        cout << "Found the value: " << mpp[something] << endl;
    } else {
        cout << "Not found" << endl;
    }

    // 🔹 Erase an element (removes key-value pair if key exists)
    mpp.erase(something);

    // 🔹 Alternative way to check existence using count()
    // - count() returns **1 if key exists**, **0 if not**.
    if (mpp.count(something)) {
        cout << "Found the value: " << mpp[something] << endl;
    } else {
        cout << "Not found" << endl;
    }

    // 🔹 Iterating through a map (always ordered)
    for (auto it = mpp.begin(); it != mpp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // 🔹 Range-based for loop (simpler way to iterate)
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

// ✅ Why use map?

// Maintains sorted order (useful when accessing elements in order).
// Supports lower_bound() & upper_bound() operations.
// Ideal for dynamic ranking, log sorting, and interval problems.
// ✅ When NOT to use map?

// When order is not needed (use unordered_map instead for O(1) operations).
// If logarithmic complexity is too slow (use a hash table for better performance).
// ✅ Where is it used in CP?

// Sorting problems with key-value mappings.
// Finding the closest larger/smaller element using lower_bound() / upper_bound().
// Handling intervals in a sorted manner (e.g., sweep line algorithms).
// Graph problems where keys need to be sorted.
