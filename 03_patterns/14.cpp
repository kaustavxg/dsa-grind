#include<bits/stdc++.h>
using namespace std;

/*
A
A B
A B C
A B C D
A B C D E
*/

void print14(int n){
    for(int i = 1; i <= n; i++){
        // i = 2 
        for(char ch = 'A'; ch <= 'A' + i; i++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print14(n);
}