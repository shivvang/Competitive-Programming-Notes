#include <iostream>
#include <queue>  // Required for queue container
using namespace std;

int main() {
    // Queue follows First In First Out (FIFO) order.
    // Elements are added from the rear (push) and retrieved from the front (pop).

    queue<int> q;

    // Inserting elements into the queue (1 to 5)
    for (int i = 1; i <= 5; i++) {
        q.push(i);
    }

    // Printing and removing elements from the queue
    // Since queue follows FIFO, elements will be printed in the order of insertion.
    while (!q.empty()) {
        cout << q.front() << " "; // Access the front element
        q.pop(); // Remove the front element
    }

    return 0;
}

/*
💡 QUEUE IN COMPETITIVE PROGRAMMING:
-----------------------------------
🔹 Queue is widely used when elements need to be processed in First-In-First-Out (FIFO) order.
🔹 Operations: 
   - `push()`: Adds an element to the rear of the queue (O(1)).
   - `pop()`: Removes an element from the front of the queue (O(1)).
   - `front()`: Accesses the front element (O(1)).

🚀 COMMON USE CASES IN CP:
1️⃣ **Breadth-First Search (BFS) Algorithm**  
   - Queue is fundamental in graph traversal using BFS.
   - Ensures nodes are visited in layers.

2️⃣ **Shortest Path in Unweighted Graph**  
   - BFS with a queue is used to find the shortest path in an unweighted graph.
   - Example: Finding the shortest path in a maze/grid.

3️⃣ **Job Scheduling / Task Processing**  
   - Jobs or tasks that must be executed in order (like CPU scheduling).
   - Example: Round Robin Scheduling.

4️⃣ **Cache Implementation (FIFO Cache)**  
   - Used in cache design where the least recently added element is removed first.

5️⃣ **Level Order Traversal of a Tree**  
   - Used for traversing trees level by level.

6️⃣ **Sliding Window Maximum (Using deque for optimization)**  
   - A **deque** is often used to optimize sliding window problems, but a queue gives a simple approach.

📌 QUEUE VARIANTS:
- **`priority_queue`** (Heap-based queue for priority-based processing).
- **`deque` (Double-ended queue)** for operations on both ends.
- **`stack`** (LIFO behavior) if you need the reverse order of a queue.

*/
