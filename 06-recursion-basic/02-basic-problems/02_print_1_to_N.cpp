#include<bits/stdc++.h>
using namespace std;

/*
print 1 to N
*/

void printNumber(int i, int n){
    if(i > n){
        return; //# base condition
    }

    cout << i << endl;
    printNumber(i+1, n);
}

int main(){
    int n;
    int i = 1;
    cout << "n: ";
    cin >> n;

    printNumber(i, n);
    
    return 0;
}