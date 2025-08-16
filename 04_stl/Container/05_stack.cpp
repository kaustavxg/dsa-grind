#include<bits/stdc++.h>
using namespace std;

void explainStack(){

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {1, 2}
    st.push(3); // {1, 2, 3} 
    st.push(5); // {1, 2, 3, 5}
    st.emplace(7); // {7, 1, 2, 3, 5}

    cout << "st.top(): " << st.top() << endl; // prints 7 
    //! st[2] is invalid syntax

    st.pop(); // {7, 1, 2, 3}

    cout << "st.top(): " << st.top() << endl; // prints the top element 3

    // current st: {7, 1, 2, 3}

    cout << "st.size(): " << st.size() << endl; // size of stack: {4}

    cout << "st.empty(): " << st.empty() << endl; // pops out all the elements from the stack and make the stack empty

    stack<int> st1, st2;
    st1.swap(st2);
}

int main(){
    explainStack();

    return 0;
}