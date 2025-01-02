#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {20, 30, 40, 40, 40, 50, 100, 1100};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 🔍 Search for an element in a sorted array
    int key = 50;

    bool present = binary_search(arr, arr + n, key);

    if (present) 
        cout << "Yes, the element is present." << endl;
    else 
        cout << "No, the element is not present." << endl;

    // 🔑 Lower Bound: Returns pointer to the first element >= key
    auto lb = lower_bound(arr, arr + n, 40);
    cout << "Lower Bound index of 40: " << (lb - arr) << endl;

    // 🔑 Upper Bound: Returns pointer to the first element > key
    auto ub = upper_bound(arr, arr + n, 40);
    cout << "Upper Bound index of 40: " << (ub - arr) << endl;

    // 📊 Frequency of the element
    cout << "Frequency of 40: " << (ub - lb) << endl;


//     📚 Functions Overview

// 1️⃣ binary_search

// Purpose: Checks if an element exists in a sorted array/vector.

// Return Type: bool (true if element exists, false otherwise)

// Time Complexity: 
// O(logn)

// Best Use Case: When you only need to check presence of an element.

// 2️⃣ lower_bound

// Purpose: Returns an iterator/pointer to the first element that is not less than (≥) the given key.

// Time Complexity: 

// O(logn)

// Best Use Case: When you need the first occurrence of an element or a point where it can be inserted without breaking the order.

// Example:
// Array: {20, 30, 40, 40, 40, 50}

// lower_bound(arr, arr+n, 40) → Points to the first 40.

// 3️⃣ upper_bound

// Purpose: Returns an iterator/pointer to the first element that is greater (>) than the given key.

// Time Complexity: 

// O(logn)

// Best Use Case: When you need the first element strictly greater than the key.

// Example:

// Array: {20, 30, 40, 40, 40, 50}

// upper_bound(arr, arr+n, 40) → Points to 50.


// 🚀 When to Use in Competitive Programming?
// binary_search

// Use: Quick presence check in a sorted array/vector.
// Condition: Only if you need a yes/no answer.

// lower_bound

// Use: When you need the starting position of an element or the insertion point.
// Condition: When duplicates are present, and you care about the first occurrence.

// upper_bound

// Use: When you need the end position of an element or the next greater element.
// Condition: Useful for frequency calculations or identifying ranges.

// Frequency of Element

// Use: To count occurrences of a key quickly in a sorted array/vector.
// Condition: Both lower_bound and upper_bound must be used together.

    return 0;
}
