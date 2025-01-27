#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {2, 42, 52, 53, 3, 6, 3, 74, 43, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    set<int> st; // Ordered Set

    // 🔹 Insert elements (O(log N) per insertion)
    for (int i = 0; i < n; i++) {
        st.insert(arr[i]); // Duplicate values are ignored
    }

    // 🔹 Erase a specific value (O(log N))
    st.erase(2);

    // 🔹 Find and delete an element (O(log N))
    auto it = st.find(43); // Returns iterator to 43 if exists, else st.end()
    if (it != st.end()) st.erase(it);

    // 🔹 Iterate and Print (O(N))
    cout << "Elements in the set: ";
    for (auto it = st.begin(); it != st.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}


// 🔹 Why Use set?
// ✅ Ensures Unique Elements – No duplicates.
// ✅ Auto-Sorted – Always sorted in ascending order (default).
// ✅ Efficient Operations – O(log N) for insertion, deletion, search.
// ✅ Useful for Competitive Programming (CP) – Solves problems like finding unique elements, handling duplicates, and range-based queries.


//  Time Complexity of set Operations
// Operation	Complexity
// Insertion	O(log N)
// Deletion	O(log N)
// Search	O(log N)
// Iteration	O(N)
// 🔥 Key Features of set
// 1️⃣ No Duplicate Elements – If a duplicate is inserted, it’s ignored.
// 2️⃣ Sorted Order – Maintains increasing order.
// 3️⃣ Efficient Search & Delete – O(log N) using binary search tree (BST).
// 4️⃣ Iterators for Traversal – Supports begin(), end(), lower_bound(), and upper_bound().

// 🔥 When to Use set?
// Need Unique Elements – Storing distinct elements without duplicates.
// Sorted Order is Required – If retrieval in ascending order is needed.
// Efficient Range Queries – Finding min/max efficiently using lower_bound().
// Handling Repetitions – Removing duplicates from an array efficiently.
// 🔥 set vs. unordered_set – Which One to Choose?
// Feature	  set (Ordered)	           unordered_set
// Storage	   BST (Red-Black Tree)	    Hash Table
// Insertion	O(log N)	            O(1) avg, O(N) worst-case
// Deletion	   O(log N)	                O(1) avg, O(N) worst-case
// Search	   O(log N)	                O(1) avg, O(N) worst-case
// Sorted	✅ Yes	                  ❌ No


// Best Use Case	Ordered unique elements	Fast lookups without order

// 🔥 Key Takeaways

// ✔ Use set when:

// You need unique elements in sorted order.
// You need fast min/max values with begin() and rbegin().
// You need range queries like lower_bound() and upper_bound().

// ✔ Use unordered_set when:

// Order doesn’t matter, but fast insert/search/delete is needed.
// You need O(1) operations (on average).
// Hash collisions are rare (works well with simple data types).
// 🔥 Real-World Use Cases
// 🔹 Finding Unique Elements in an Array
// 🔹 Checking for Duplicates Efficiently
// 🔹 Keeping a Set of Unique Usernames
// 🔹 Efficiently Finding the Next Greater/Smaller Element
// 🔹 Handling Distinct Values in a Dynamic System (e.g., leaderboard, ranking)