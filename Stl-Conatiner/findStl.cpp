#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {1, 24, 5, 232, 5, 32};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Display the array
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search using find method
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    auto it = find(arr, arr + n, key); // Find the key in array

    int index = it - arr;

    if (index == n) 
        cout << "Key is not present in the array." << endl;
    else 
        cout << "Key is present at index: " << index << endl;



// Time Complexity of C++ find Method
// The time complexity of find depends on the container you're using:

// std::vector, std::array, std::deque:

// Time Complexity: 

// O(n)
// Reason: Performs a linear search because these containers are not ordered.

// std::list, std::forward_list:

// Time Complexity: 
// O(n)

// Reason: They require a sequential search due to their linear structure.

// std::set, std::multiset:

// Time Complexity: 
// O(logn)
// Reason: These are implemented as balanced binary search trees (usually Red-Black Trees).

// std::map, std::multimap:

// Time Complexity: 
// O(logn)
// Reason: Implemented as balanced binary search trees.


// std::unordered_set, std::unordered_map:

// Time Complexity:
// Average Case: 
// O(1)
// Worst Case: 
// O(n)

// Reason: Uses hash tables. Worst-case occurs if there's a hash collision.

// Takeaway for Competitive Programming

// Prefer unordered_set / unordered_map for average-case 
// O(1) lookups.

// Use set / map if order needs to be preserved, with 
// O(logn) guarantees.

// Avoid vector::find and list::find for large datasets, as they're 
// O(n).
    return 0;
}
