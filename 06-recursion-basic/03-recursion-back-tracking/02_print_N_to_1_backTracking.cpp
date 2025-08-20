#include<bits/stdc++.h>
using namespace std;

/*
#print N -> using backtracking

! using i-1 is not allowed in printBackTracking()
*/

void printBackTracking(int i, int n){

    if(i > n){
        return;
    }

    printBackTracking(i+1, n);
    cout << i << endl;

}

int main(){

    int n;
    cout << "n: ";
    cin >> n;
    int i = 1;

    printBackTracking(i, n);

}