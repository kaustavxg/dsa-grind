#include<bits/stdc++.h>
using namespace std;

/*
1 _ _ _ _ _ _ 1
1 2 _ _ _ _ 2 1
1 2 3 _ _ 3 2 1
1 2 3 4 4 3 2 1
*/

void print12(int n){
    for(int i = 1; i <= n; i++){
        // number
        for(int j = 1; j <= i; j++){
            cout << j ;
        }
        //space
        for(int j = 1; j <= 2*(n-i); j++){
            cout << "_";
        }

        //number
         for(int j = i; j >= 1; j--){
            cout << j;
        }

        cout << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print12(n);
}