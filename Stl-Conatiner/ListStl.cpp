#include <iostream>
#include <list> // Doubly linked list
using namespace std;

/*
👉 **List Operations Overview:**  
- `push_front`, `push_back`: Add elements at front/back (O(1)).  
- `pop_front`, `pop_back`: Remove elements from front/back (O(1)).  
- `sort`: Sorts the list (O(NlogN)).  
- `reverse`: Reverses the list (O(N)).  
- `remove`: Removes specific elements (O(N)).  
- `erase`: Erase by iterator (O(1) per operation).  
- `insert`: Insert at specific position using iterator (O(1)).  
*/

int main() {
    // 🛠️ **List Initialization**
    list<int> l1; // Empty list
    list<int> l2{2, 452, 3, 2, 34, 2}; // Pre-filled list
    list<string> l3{"apple", "orange", "guava", "banana"}; // String list

    // 🚀 **Push Operations**
    l3.push_back("strawberry"); // Add at the end (O(1))
    l3.push_front("kiwi");      // Add at the front (O(1))

    // 🗑️ **Pop Operations**
    l3.pop_front(); // Remove first element (O(1))
    l3.pop_back();  // Remove last element (O(1))

    // 📊 **Sorting and Reversing**
    l3.sort();   // Sort list (O(NlogN))
    l3.reverse(); // Reverse list (O(N))

    // 🔄 **Iterate Using Range-Based For Loop**
    for (string s : l3) {
        cout << s << " -> ";
    }
    cout << endl;

    // 🔄 **Iterate Using Iterator**
    for (auto it = l3.begin(); it != l3.end(); it++) {
        cout << (*it) << " -> ";
    }
    cout << endl;

    // 🧹 **Remove Specific Element**
    l3.remove("cherry"); // Remove all occurrences of "cherry" (O(N))

    // 🗑️ **Erase an Element Using Iterator**
    auto it = l3.begin(); 
    it++; // Move to second element
    it++;
    l3.erase(it); // Erase element at iterator position (O(1))

    // 🛠️ **Insert an Element at Specific Position**
    auto pos = l3.begin();
    pos++; // Move to second position
    l3.insert(pos, "yo I'm some fruit idk"); // Insert at iterator position (O(1))

    // 🔄 **Final List Display**
    for (string s : l3) {
        cout << s << " -> ";
    }
    cout << endl;

    return 0;
}

/*
👉 **In-Code Explanation:**  

1️⃣ **Basic Operations:**  
   - `push_front`, `push_back`: Add elements to front/back.  
   - `pop_front`, `pop_back`: Remove elements from front/back.  

2️⃣ **Sorting and Reversing:**  
   - `sort`: Sort list in ascending order.  
   - `reverse`: Reverse the order of elements.  

3️⃣ **Access Elements:**  
   - Use iterators (`begin`, `end`) for precise element access.  

4️⃣ **Modifications:**  
   - `remove`: Remove specific values.  
   - `erase`: Remove using iterator.  
   - `insert`: Insert at specific position using iterator.  

5️⃣ **Iteration:**  
   - Use range-based for loops for simplicity.  
   - Use iterators for fine control.  
*/
