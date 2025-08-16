#include<bits/stdc++.h>
using namespace std;

void explainDQ(){

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}

    // dq = {1, 2, 3};
    dq.front();  // prints -> {1}
    dq.back(); // prints -> {3}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main(){
    explainDQ();

    return 0;
}