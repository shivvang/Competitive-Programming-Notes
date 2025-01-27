#include <iostream>
#include <stack>  // Required for stack container
using namespace std;

int main() {
    // Stack follows Last In First Out (LIFO) order.
    // The latest added element to the stack is the first one to be removed.

    // Stack operations: push, pop, and top have an average time complexity of O(1).
    stack<int> stackun;

    // Pushing elements into the stack (0 to 5)
    for (int i = 0; i <= 5; i++) {
        stackun.push(i);
    }

    // Printing and popping elements from the stack
    // Since stack follows LIFO, elements will be printed in reverse order of insertion.
    while (!stackun.empty()) {
        cout << stackun.top() << " ,"; // Access the topmost element
        stackun.pop(); // Remove the topmost element
    }

    return 0;
}

/*
💡 STACK IN COMPETITIVE PROGRAMMING:
-----------------------------------
🔹 Stack is widely used in problems where elements need to be processed in a Last-In-First-Out manner.
🔹 All stack operations (push, pop, top) run in O(1) time, making it efficient.

🚀 COMMON USE CASES IN CP:
1️⃣ **Balanced Parentheses Checking**  
   - Used to check if brackets ( '(', ')', '{', '}', '[', ']' ) are properly nested.
   - Example: Valid Parentheses problem.

2️⃣ **Next Greater Element (NGE)**  
   - Find the nearest greater element for each element in an array.
   - A **monotonic stack** is used for this with O(N) time complexity.

3️⃣ **Stock Span Problem**  
   - Used to find how many consecutive days before the current day had a lower stock price.
   - Can be solved using a stack efficiently.

4️⃣ **Undo / Backtracking Operations**  
   - Stack helps in implementing undo functionality in text editors.
   - It is also used in backtracking problems like maze solving.

5️⃣ **Depth-First Search (DFS) using Iteration**  
   - Instead of recursion, DFS traversal can be implemented using a stack.

6️⃣ **Histogram Problem (Largest Rectangle in Histogram)**  
   - Helps in finding the largest rectangle in a histogram in O(N) time.

📌 STACK ALTERNATIVES:
- Use **deque** if you need additional functionalities like accessing both ends.
- Use **priority_queue** if you need element retrieval based on priority.

*/
