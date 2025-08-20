#include<bits/stdc++.h>
using namespace std;

// ===============================
//! pass by value
// ===============================

void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num = 10;
    doSomething(num); // a copies go, the original values dosent go 
    //# it says take the copy of num which is 10 and give it to doSomething() function

    cout << num << endl;

    return 0;
}