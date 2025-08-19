#include<bits/stdc++.h>
using namespace std;

void primeCheck(int n){

    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 2){
            cout << "prime number: " << n << endl;
    } else {
        cout << "not a prime number: " << n << endl;
    }

}

void primeCheck2(int n){
    for(int i = 1; i <= n; i++){
        if(n % i == 0 && n % 1 == 0){
            cout << "prime number" << endl;
        } else {
            cout << "not a prime number" << endl;
        }
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    
    primeCheck(n);
    primeCheck2(n);

    return 0;
}