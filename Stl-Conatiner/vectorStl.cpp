#include <vector>
#include <iostream>
using namespace std;

/*
👉 **Vector Overview:**  
- A **dynamic array** that can grow and shrink in size.  
- Growth happens by **doubling the capacity** when the current size exceeds the capacity.  
- Growth is an **expensive operation** (copying all elements to a new memory location).  
*/

int main() {
    // 🛠️ **Vector Initialization**

    vector<int> a; // Empty vector
    vector<int> b(5, 10); // 5 elements, each initialized to 10
    vector<int> c(b.begin(), b.end()); // Copy elements from b into c
    vector<int> d{1, 2, 3, 4, 5, 6}; // List initialization

    // 🚀 **Iterating Over a Vector**

    // Method 1: Using index-based access
    for (int i = 0; i < c.size(); i++) 
        cout << c[i] << ",";
    cout << endl;

    // Method 2: Using iterator
    for (auto it = b.begin(); it != b.end(); it++) 
        cout << (*it) << ",";
    cout << endl;

    // Method 3: Using range-based for loop
    for (int x : d) 
        cout << x << ",";
    cout << endl;

    // 📥 **Dynamic Input into a Vector**
    vector<int> v;
    int n;
    cin >> n; // Number of elements

    for (int i = 0; i < n; i++) {
        int no;
        cin >> no;
        v.push_back(no); // Add element at the end
    }

    // Display vector after input
    for (int x : v) 
        cout << x << ",";
    cout << endl;

    // 📊 **Memory Details of Vectors**
    cout << "Vector v:" << endl;
    cout << "Size: " << v.size() << endl;       // Current number of elements
    cout << "Capacity: " << v.capacity() << endl; // Allocated memory
    cout << "Max Size: " << v.max_size() << endl; // Maximum possible size

    cout << "Vector b:" << endl;
    cout << "Size: " << b.size() << endl;
    cout << "Capacity: " << b.capacity() << endl;
    cout << "Max Size: " << b.max_size() << endl;

    return 0;
}

/*
👉 **In-Code Explanation:**  
1️⃣ **Initialization:**  
   - `a`: Empty vector.  
   - `b`: 5 elements initialized with `10`.  
   - `c`: Copied from vector `b`.  
   - `d`: Directly initialized using `{}`.  

2️⃣ **Iteration:**  
   - **Index-based (`[]`)**: Access elements by index.  
   - **Iterator (`begin()` and `end()`)**: Access using iterators.  
   - **Range-based For Loop**: Simple and clean syntax.  

3️⃣ **Dynamic Input (`push_back`)**  
   - Add elements dynamically at runtime.  

4️⃣ **Memory Details:**  
   - `size`: Number of valid elements.  
   - `capacity`: Total memory allocated.  
   - `max_size`: Upper limit on elements based on system memory.

👉 **Key Notes:**  
- **Doubling Capacity:** Expensive due to memory reallocation.  
- **Access Methods:** Indexing (`[]`), Iterators, Range-based Loops.  
- **Dynamic Nature:** Use `push_back` for runtime expansion.  
*/