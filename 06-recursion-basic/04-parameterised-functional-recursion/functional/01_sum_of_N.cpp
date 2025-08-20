#include<bits/stdc++.h>
using namespace std;

/*
sum of N
*/
int sumOfN(int n){

    if(n == 0){
        return 0;
    } else {
        return (n + sumOfN(n-1));
    }
}

int main(){
    int n;
    
    cout << "n: ";
    cin >> n;

    cout << "sum of N: " << sumOfN(n) << endl;
    
    return 0;
}