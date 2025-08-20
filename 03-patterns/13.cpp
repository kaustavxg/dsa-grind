#include<bits/stdc++.h>
using namespace std;

/*
1 
2 3
4 5 6
7 8 9 10
*/

void print13(int n){

    int number = 1;
    for(int i = 1; i <= n; i++){
 
        for(int j = 1; j <= i; j++){
            cout << number << " ";
            number = number + 1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    print13(n);
}