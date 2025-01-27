#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    /*
    🔥 Unordered Map (hash table-based map)
    - Stores elements in **key-value** pairs.
    - Provides **average O(1) time complexity** for insertion, search, and deletion.
    - Uses **hashing**, making it faster than an ordered map (O(log N)) for large datasets.
    
    📌 When to use unordered_map?
    - When order of elements **does not matter**.
    - When we need **fast lookups, insertions, and deletions**.
    - Ideal for **counting frequencies**, **storing mappings**, and **dynamic indexing**.

    🚀 Where is unordered_map used?
    - **Counting frequency of elements** (ex: counting word occurrences in a string).
    - **Checking existence of an element** (ex: checking if a value exists in a dataset).
    - **Caching / Memoization** (ex: storing computed results to avoid recomputation).
    - **Graph problems** (ex: adjacency list representation).
    */

    unordered_map<string, int> mpp;

    // 🔹 Insert elements into the map
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

    // 🔹 Alternative way to check existence using count() (faster than find)
    // - count() returns **1 if key exists**, **0 if not**.
    if (mpp.count(something)) {
        cout << "Found the value: " << mpp[something] << endl;
    } else {
        cout << "Not found" << endl;
    }

    // 🔹 Iterating through an unordered_map (unordered access)
    for (auto it = mpp.begin(); it != mpp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // 🔹 Range-based for loop (simpler way to iterate)
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
