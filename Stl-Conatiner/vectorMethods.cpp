#include <iostream>
#include <vector>
using namespace std;

/*
👉 **Vector Operations Overview:**  
- `push_back`: Add an element at the end. O(1) (most of the time).  
- `pop_back`: Remove the last element. O(1).  
- `insert`: Add elements at a specific position. O(N).  
- `erase`: Remove elements from a specific position/range. O(N).  
- `resize`: Adjust the size of the vector.  
- `reserve`: Pre-allocate memory to avoid frequent resizing.  
*/

int main() {
    // 🛠️ **Vector Initialization**
    vector<int> v{23, 52, 54, 2, 34};

    // 🚀 **Push and Pop Operations**
    v.push_back(16); // Add an element at the end (O(1))
    v.pop_back();    // Remove the last element (O(1))

    // 📥 **Insert Elements in the Middle**
    // Insert 4 copies of 500 at the 4th position
    v.insert(v.begin() + 4, 4, 500); // O(N)

    // 🗑️ **Erase Elements**
    v.erase(v.begin() + 1); // Remove the second element (O(N))
    v.erase(v.begin() + 4, v.begin() + 6); // Remove range (4th to 6th)

    // 📊 **Vector Size and Capacity**
    cout << "Size: " << v.size() << endl;       // Current number of elements
    cout << "Capacity: " << v.capacity() << endl; // Allocated memory

    // 🔄 **Resize Vector**
    v.resize(5); // Resize to 5 elements (increases capacity if necessary)
    cout << "Capacity after resize: " << v.capacity() << endl;

    // 🧹 **Clear All Elements**
    v.clear(); // Removes all elements

    // ❓ **Check if Vector is Empty**
    if (v.empty()) 
        cout << "The vector is empty." << endl;

    // 🌟 **Access Front and Back Elements**
    v.push_back(23);
    v.push_back(43);
    v.push_back(53);
    v.push_back(53);
    v.push_back(63);

    cout << "Front Element: " << v.front() << endl; // First element
    cout << "Back Element: " << v.back() << endl;   // Last element

    // 🔄 **Range-Based Loop for Display**
    for (auto it : v) 
        cout << it << " ";
    cout << endl;

    // 🚀 **Reserve Memory to Prevent Doubling**
    int n;
    cin >> n;
    vector<int> c;
    c.reserve(1000); // Pre-allocate memory for 1000 elements

    for (int i = 0; i < n; i++) {
        int no;
        cin >> no;
        c.push_back(no); // Add element
        cout << "Current Capacity: " << c.capacity() << endl;
    }

    cout << "Final Capacity: " << c.capacity() << endl;

    // Display final vector
    for (auto it : c) 
        cout << it << " ";
    cout << endl;

    return 0;
}

/*
👉 **In-Code Explanation:**  

1️⃣ **Basic Operations:**  
   - `push_back`: Add element at the end.  
   - `pop_back`: Remove last element.  

2️⃣ **Middle Insertion and Erase:**  
   - `insert`: Add elements at a specific index.  
   - `erase`: Remove an element or range.  

3️⃣ **Memory Management:**  
   - `size`: Current count of valid elements.  
   - `capacity`: Allocated memory slots.  
   - `resize`: Adjust vector size.  
   - `clear`: Remove all elements.  
   - `reserve`: Pre-allocate memory to prevent frequent reallocations.  

4️⃣ **Access Front and Back:**  
   - `front`: First element.  
   - `back`: Last element.  

5️⃣ **Best Practices:**  
   - Use `reserve` when the number of elements is known in advance.  
   - Avoid frequent resizing operations.  
*/
