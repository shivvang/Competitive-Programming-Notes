#include <iostream>
#include <queue>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person() {}

    Person(string n, int no) {
        name = n;
        age = no;
    }
};

// Custom comparator for priority queue (Min Heap based on age)
class comparePerson {
public:
    bool operator()(Person a, Person b) {
        return a.age > b.age;  // Min heap: Person with smaller age has higher priority
        // This makes it a Min Heap, meaning smallest values come out first.

        // It places the smallest age at the top.
        // If a.age > b.age, a is considered larger and placed after b.


        // 🔹 Case 2: return a.age < b.age;
        // This makes it a Max Heap, meaning largest values come out first.

        // It places the largest age at the top.
        // If a.age < b.age, a is considered smaller and placed after b.
    }
};

int main() {
    //organizes the element from max first to min first order  
    //push pop has time complexity -> o(log n) //height of tree (complete binary tree)
    //top has time complexity -> o(1)

    // priority_queue<int>pq; //by default max value first in STL
    // priority_queue<int,vector<int>,greater<int>>pq_min; //min heap min value first

    // 🔥 Max Heap: By default, priority_queue<int> behaves like a max heap, where the largest element comes out first.

    // 🔥 Min Heap: Adding greater<int> makes it a min heap, where the smallest element comes out first.


                //     Operations on a Priority Queue

                // Operation	            Syntax	     Time Complexity

                // Insert Element	        pq.push(x);	 O(log N)
                // Get Top Element	        pq.top();	 O(1)
                // Remove Top Element	    pq.pop();	 O(log N)
                // Check if Empty	        pq.empty();	 O(1)
                // Size of Queue	        pq.size();	 O(1)

    // int n;
    // cin>>n;

    // for(int i=0;i<n;i++){
    //         int no;
    //         cin>>no;
    //         pq.push(no);
    //         pq_min.push(no);
    // }

    // cout<<"max heap stuff"<<endl;

    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }cout<<endl;

    // cout<<"min heap stuff"<<endl;
    
    // while(!pq_min.empty()){
    //     cout<<pq_min.top()<<" ";
    //     pq_min.pop();
    // }

    priority_queue<Person, vector<Person>, comparePerson> pq_person;

    for (int i = 0; i < 5; i++) {
        string name;
        int age;
        cin >> name >> age;
        Person p(name, age);
        pq_person.push(p);
    }

    while (!pq_person.empty()) {
        Person something = pq_person.top();
        cout << something.name << " " << something.age << endl;
        pq_person.pop();
    }

    return 0;
}


// Priority queues are super useful in competitive programming because they allow efficient element retrieval based on priority. 🚀

// Problem Type	Explanation 
// Dijkstra’s Algorithm	Finds the shortest path in a graph using a Min Heap.
// A Algorithm (AI Pathfinding)*	Used in AI to determine the most optimal path.
// K Largest/Smallest Elements in an Array	Priority queues help maintain a rolling list of the k smallest or largest elements.
// Task Scheduling (CPU Scheduling, Job Processing)	Assigns higher priority tasks to be executed first.
// Huffman Encoding (Compression Algorithm)	Builds an optimal binary tree for data compression.
// Merging K Sorted Arrays	Min heap is used to efficiently merge multiple sorted arrays.



// Why use a Priority Queue?

// 1️⃣ Efficient sorting → Sort elements dynamically in O(log N) rather than O(N log N) (like sorting a whole array).
// 2️⃣ Dynamic priority management → Unlike sorting, we can update priorities in real-time.
// 3️⃣ Optimal for "top k" problems → Extract max/min elements efficiently.
// 4️⃣ Graph-based algorithms → Used in Dijkstra’s and Prim’s algorithms for shortest path & MST.
// 5️⃣ Data compression & AI pathfinding → Used in Huffman Encoding and A search*.

