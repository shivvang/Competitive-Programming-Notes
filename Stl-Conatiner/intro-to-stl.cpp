// STL Containers in Competitive Programming – A Concise Guide 🚀

// In C++ STL (Standard Template Library), containers are used to store and manage collections of data efficiently.

// They are broadly categorized as:

// 📚 1. Sequence Containers

// Store data in a linear fashion.
// Best for: Maintaining order and accessing elements sequentially.

// Container	Key Features	                                                       Use Cases

// Vector	Dynamic array, fast random access, amortized O(1) insertion at the end	  Storing variable-sized data, fast lookups

// List	Doubly linked list, fast insertion/deletion anywhere	                      Implementing adjacency lists, frequent mid-insertions

// Deque	Double-ended queue, fast insertion/deletion at both ends	              Sliding window problems, BFS

// Array	Fixed size, static contiguous memory	                                  Fixed data sets with known size

// Forward List	Singly linked list	                                                  Memory-efficient single-direction traversals




// 🔄 2. Container Adapters

// Provide a restricted interface to sequence containers.
// Best for: LIFO (Last-In, First-Out) or FIFO (First-In, First-Out) operations.

// Container	    Key Features	                                                   Use Cases

// Stack	        LIFO structure, O(1) push/pop	                                   DFS, Balanced Parentheses

// Queue	        FIFO structure, O(1) push/pop	                                   BFS, Task Scheduling

// Priority Queue	Elements sorted by priority (default: max heap)	               Dijkstra's Algorithm, Top-K Elements


// 🌳 3. Associative Containers

// Store data in key-value pairs or unique keys.
// Best for: Fast lookups and ordered data.

// Container	              Key Features	                                Use Cases

// Set	                  Unique, ordered elements	                      Finding unique numbers, ordered storage

// Multiset	              Ordered, allows duplicates	                 Frequency counting

// Map	                  Key-value pairs, ordered by key	             Lookup tables, frequency maps

// Multimap            	Multiple values per key	                         Grouping data under keys


// ⚡ 4. Unordered Associative Containers

// Use hash tables internally.
// Best for: Average O(1) lookups, unordered storage.

// Container	                           Key Features	                Use Cases

// Unordered Set	                    Unique, unordered	            Fast existence check

// Unordered Multiset	                Unordered, allows duplicates	Frequency counting

// Unordered Map	                    Key-value pairs, unordered	    Fast dictionary lookups

// Unordered Multimap	                Multiple values per key	        Grouping unordered data



// 🛠️ Which Container to Use in Competitive Programming?

// Vector: Default for dynamic arrays.

// Set/Map: When order matters.

// Unordered Map/Set: When you need O(1) average lookups.

// Priority Queue: When priority-based order is required.

// Deque: Sliding window or two-end operations.

// Stack/Queue: LIFO/FIFO access patterns.


