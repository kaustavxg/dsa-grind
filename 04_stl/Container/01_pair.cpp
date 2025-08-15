#include<bits/stdc++.h>
using namespace std;

void explainPair(){

    pair<int, int> p = {1, 3};
    cout << "p.first: " << p.first << endl; 
    cout << "p.second: " << p.second << endl;

    cout << "====================================================================" << endl;

    pair<int, pair<int, int>> p2 = {1, {4, 5}};
    cout <<"p2.first: " << p2.first << endl; 
    cout << "p2.second.first: " << p2.second.first << endl; 
    cout << "p2.second.second: " << p2.second.second << endl;

    cout << "====================================================================" << endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {4, 5} };

    cout << "arr[0].first: " << arr[0].first << endl;
}

int main(){ 
    explainPair();
    return 0;
}