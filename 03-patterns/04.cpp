#include<bits/stdc++.h>
using namespace std;

/*
1
2 2
3 3 3
*/

// https://www.naukri.com/code360/problems/triangle_6573690?leftPanelTabValue=PROBLEM

void print4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print4(n);
}