#include<bits/stdc++.h>
using namespace std;

/*
_ _ _ * _ _ _
_ _ * * * _ _
_ * * * * * _
* * * * * * *
*/

void print7(int n){
    for(int i = 0; i < n; i++){
        // space
        for(int j = 0; j < n-i-1; j++){
            cout << "_";
        }

        // star
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j < n-i-1; j++){
            cout << "_";
        }

        cout << endl;
        
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print7(n);

}