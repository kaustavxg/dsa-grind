#include<bits/stdc++.h>
using namespace std;

/*
print 1 -> N using backtracking

! using i+1 is not allowed in printBackTracking()
*/

void printBackTracking(int i, int n){

    if(i < 1){
        return;
    }

    printBackTracking(i-1, n);
    cout << i << endl;

}

int main(){

    int n;
    cout << "n: ";
    cin >> n;
    int i = n;

    printBackTracking(i, n);

}