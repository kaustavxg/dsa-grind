#include<bits/stdc++.h>
using namespace std;

/*
print N to 1
*/

void printNumberReverse(int i, int n){
    if(i < 1){
        return;
    }

    cout << i << endl;
    printNumberReverse(i-1, n);
}

int main(){
    int n;
    
    cout << "n: ";
    cin >> n;

    int i = n; // i will come afterwards only because if i keep i before taking the value of n from user, it will have some garbage value with it

    printNumberReverse(i, n);
    
    return 0;
}