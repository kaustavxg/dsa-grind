#include<bits/stdc++.h>
using namespace std;

/*
! Time complexity for Priority Queue (implemented as Binary Heap)

# 1. push() -> O(log n)  - inserting element and maintaining heap property
# 2. top()  -> O(1)      - just accessing the root element
# 3. pop()  -> O(log n)  - removing top and re-heapifying

Real-world example: Hospital Emergency Room
- Patient with highest priority (most critical) gets treated first
- Adding new patient: O(log n) to find correct position
- Checking who's next: O(1) - always the most critical
- Treating patient: O(log n) to reorganize queue
*/

void explainPriorityQ(){

    //! DEFAULT: Max Heap - largest element stays at top
    // Think of it like a leaderboard where highest score is always visible
    priority_queue<int> pq; 

    pq.push(5);     // {5} - only element, so it's at top
    pq.push(2);     // {5, 2} - 5 stays at top (larger than 2)
    pq.push(8);     // {8, 5, 2} - 8 goes to top (largest)
    pq.emplace(10); // {10, 8, 5, 2} - 10 becomes new top (largest)

    cout << "Max heap top: " << pq.top() << endl; // prints 10 (largest element)

    pq.pop(); // Removes 10, heap reorganizes to {8, 5, 2}

    cout << "After pop: " << pq.top() << endl; // prints 8 (new largest)

    // size(), empty(), swap() functions work same as other containers

    cout << "Size: " << pq.size() << endl;        // prints 3
    cout << "Is empty: " << pq.empty() << endl;   // prints 0 (false)

    // ===================================================================

    //! MINIMUM HEAP - smallest element stays at top
    // What if I want smallest element at top instead of largest?
    // Real example: Print queue where shortest documents print first
    
    priority_queue<int, vector<int>, greater<int>> prq; //# Min heap syntax
    //                  ↑container   ↑comparator
    //                               greater<int> = smaller elements get priority

    prq.push(5);  // {5} - only element
    prq.push(2);  // {2, 5} - 2 goes to top (smaller than 5)
    prq.push(8);  // {2, 5, 8} - 2 stays at top (smallest)
    prq.push(10); // {2, 5, 8, 10} - 2 still at top (smallest)

    cout << "Min heap top: " << prq.top() << endl; // prints 2 (smallest element)

    prq.pop(); // Removes 2, heap becomes {5, 8, 10}
    cout << "Min heap after pop: " << prq.top() << endl; // prints 5 (new smallest) 
}

int main(){
    explainPriorityQ();
    return 0;
}

/*
    !KEY DIFFERENCES:
    
    # Max Heap (default):           Min Heap (with greater<int>):
    priority_queue<int> pq;         priority_queue<int, vector<int>, greater<int>> prq;
    
    - Largest at top               - Smallest at top
    - Used for: high scores,       - Used for: shortest time, 
      maximum values                 minimum distance, etc.
    
    MEMORY REPRESENTATION (conceptually):
    # Max heap: [10, 8, 5, 2]      Min heap: [2, 5, 8, 10]
               ↑ top                      ↑ top
    */