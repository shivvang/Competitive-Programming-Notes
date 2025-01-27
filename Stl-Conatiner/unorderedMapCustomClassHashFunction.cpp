#include <iostream>
#include <unordered_map>
using namespace std;

// 🔹 Custom class Student to be used as a key in unordered_map
class Student {
public:
    string firstname;
    string lastname;
    string rollno;

    // Constructor
    Student(string fn, string ln, string rn) {
        this->firstname = fn;
        this->lastname = ln;
        this->rollno = rn;
    }

    // 🔥 Custom equality operator (needed for unordered_map to compare keys)
    bool operator==(const Student &s) const {
        return this->rollno == s.rollno; // Two students are same if their roll numbers match
    }
};

// 🔹 Custom hash function for unordered_map
class Hashfn {
public:
    size_t operator()(const Student &s) const {
        // Custom hash function: Sum of first and last name lengths
        return s.firstname.length() + s.lastname.length();
    }
};

int main() {
    /*
    🔥 Unordered Map with Custom Class as Key
    - Stores `Student` objects as **keys** and `int` as **values**.
    - **Average Time Complexity: O(1)** for insert, find, and delete.
    - Uses **hashing** instead of balanced BST (`map` uses Red-Black Tree).
    
    📌 Why use unordered_map?
    - **Fast retrieval** (O(1) instead of O(log N) in `map`).
    - **Used when key lookup speed is more important than ordering**.

    📌 Where is it used in CP?
    - **Storing student data efficiently**.
    - **Caching problems** (storing previously computed results).
    - **Graph adjacency list representation** (fast edge lookup).
    */

    unordered_map<Student, int, Hashfn> mpp; // Unordered map with custom hashing

    // Creating Student objects
    Student s1("yo", "yo", "010");
    Student s2("oyo", "oyo", "0120");
    Student s3("oyoo", "oyoo", "031");
    Student s4("ooyoo", "ooyoo", "440");

    // 🔹 Storing marks for students using roll numbers as unique identifiers
    mpp[s1] = 100;
    mpp[s2] = 40;
    mpp[s3] = 65;
    mpp[s4] = 50;

    // 🔹 Iterating over unordered_map
    for (auto it : mpp) {
        cout << it.first.firstname << " " << it.first.rollno << " " << it.second << endl;
    }

    return 0;
}


// ✅ Why use unordered_map instead of map?

// Faster than map (O(1) vs. O(log N) operations).
// Efficient for frequent lookups (like caching, frequency counting).
// No need for sorted order (unordered_map doesn’t store keys in sorted order).
// ✅ When to use a custom hash function?

// When using complex objects as keys (like Student in this case).
// To optimize hash distribution for better performance.
// To avoid collisions for certain types of data.
// ✅ Where is this used in CP?

// Storing and retrieving data efficiently in O(1) time.
// Graph problems (storing edges and weights).
// Memoization (storing already computed results).
// String pattern matching (e.g., frequency maps).