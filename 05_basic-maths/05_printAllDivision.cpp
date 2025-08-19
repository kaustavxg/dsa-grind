#include<bits/stdc++.h>
using namespace std;

void printAllDivision(int n ){

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << "divisible number is: " << i << endl;
        }
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    printAllDivision(n);

    return 0;
}