#include<bits/stdc++.h>
using namespace std;

/*

* * * * *
_ * * * _
_ _ * _ _ 

*/

void print8(int n){
    for(int i = 0; i < n; i++){

        // space
        for(int j = 0; j < i; j++){
            cout << "_";
        }

        // star
        for(int j = 1; j <= 2*n - (2*i+1); j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < 2*i-i; j++){
            cout << "_";
        }
        cout << endl;



    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print8(n);
}