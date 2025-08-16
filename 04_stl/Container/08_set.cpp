#include<bits/stdc++.h>
using namespace std;

void explainSet(){

    //! stores everything in sorted order and just unique
    
    set<int> st;

    st.insert(1); // {1}
    st.insert(2); // {1, 2};
    st.insert(2); // {1, 2} -> it won't insert as it only insert unique values

    st.insert(4); // {1, 2, 4};
    st.insert(3); // {1, 2, 3, 4}

    // functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(), empty() 
    // and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6); // if an element is not present in the set -> it will return set.end() element

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes log time

    int cnt = st.count(1); // if it exist it will have 1 occurence otherwise 0 // it set is unique

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(3);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} {first, last}

    // lower_bound and upper_bound() function works in the same way
    // as in vector it does.

    // this is the syntax
    auto it = st.lower_bound(2);

    auto it = st.upper_bound(3);
}

int main(){
    explainSet();
    return 0;
}