#include<bits/stdc++.h>
using namespace std;

void explainSet(){

    //! Set stores everything in SORTED order and only UNIQUE elements
    //! Think of it like a VIP guest list - no duplicates, always alphabetical
    //# Time complexity: Insert/Delete/Search = O(log n)
    
    set<int> st;

    st.insert(1); // {1}
    st.insert(2); // {1, 2} - automatically sorted
    st.insert(2); // {1, 2} - duplicate ignored! Still same set
    st.insert(4); // {1, 2, 4} - inserted in sorted position
    st.insert(3); // {1, 2, 3, 4} - 3 goes between 2 and 4

    cout << "Set contents: ";
    for(auto x : st) cout << x << " ";  // Always prints: 1 2 3 4
    cout << endl;

    // emplace() can also be used instead of insert() for better efficiency
    st.emplace(5); // {1, 2, 3, 4, 5}

    // Common functions work same as other containers:
    // begin(), end(), rbegin(), rend(), size(), empty(), swap()
    
    cout << "Set size: " << st.size() << endl; // prints 5

    // ===================================================================
    // SEARCHING ELEMENTS

    // Case 1: Element EXISTS in set
    set<int> example = {1, 2, 3, 4, 5};
    auto it = example.find(3);
    
    if(it != example.end()) {
        cout << "Found: " << *it << endl; // prints "Found: 3"
    }

    // Case 2: Element DOESN'T EXIST in set
    auto it2 = example.find(6); // 6 is not in set
    
    if(it2 == example.end()) {
        cout << "Element 6 not found!" << endl; // this will print
    }

    // ===================================================================
    // DELETING ELEMENTS

    // Method 1: Delete by value
    set<int> demo = {1, 2, 3, 4, 5};
    demo.erase(5); // Removes 5 directly, takes O(log n) time
    // Result: {1, 2, 3, 4}

    // Method 2: Delete by iterator (faster if you already have iterator)
    auto iter = demo.find(3);
    demo.erase(iter); // Removes 3, takes O(log n) time
    // Result: {1, 2, 4}

    // Method 3: Delete range of elements
    set<int> range_demo = {1, 2, 3, 4, 5};
    auto it1 = range_demo.find(2); // iterator pointing to 2
    auto it2 = range_demo.find(4); // iterator pointing to 4
    range_demo.erase(it1, it2);    // deletes [it1, it2) = deletes 2,3 (not 4)
    // Result: {1, 4, 5}

    // ===================================================================
    // COUNT FUNCTION

    int cnt = example.count(1); // Returns 1 if exists, 0 if doesn't exist
    cout << "Count of 1: " << cnt << endl; // prints 1
    
    int cnt2 = example.count(10); // Returns 0 (doesn't exist)
    cout << "Count of 10: " << cnt2 << endl; // prints 0

    // Note: In set, count is always 0 or 1 (since elements are unique)

    // ===================================================================
    // LOWER_BOUND and UPPER_BOUND

    set<int> bounds_demo = {1, 3, 5, 7, 9};

    // lower_bound(x) = iterator to first element >= x
    auto lb = bounds_demo.lower_bound(5); 
    cout << "Lower bound of 5: " << *lb << endl; // prints 5

    auto lb2 = bounds_demo.lower_bound(4); // 4 doesn't exist
    cout << "Lower bound of 4: " << *lb2 << endl; // prints 5 (first element >= 4)

    // upper_bound(x) = iterator to first element > x  
    auto ub = bounds_demo.upper_bound(5);
    cout << "Upper bound of 5: " << *ub << endl; // prints 7 (first element > 5)

    auto ub2 = bounds_demo.upper_bound(4); // 4 doesn't exist
    cout << "Upper bound of 4: " << *ub2 << endl; // prints 5 (first element > 4)

    /*
    PRACTICAL EXAMPLES:
    
    1. Student Roll Numbers: {101, 103, 105, 107} - no duplicates, sorted
    2. Unique IDs in database
    3. Dictionary words (automatically alphabetical)
    4. Leaderboard with unique scores
    
    WHEN TO USE SET:
    ✅  Need unique elements only
    ✅ Want automatic sorting  
    ✅ Frequent search operations
    ✅ Need lower_bound/upper_bound functionality
    
    WHEN NOT TO USE SET:
    ❌ Need to store duplicates (use multiset)
    ❌ Need fast random access by index (use vector)
    ❌ Don't need sorting (use unordered_set for faster operations)
    */
}

int main(){
    explainSet();
    return 0;
}