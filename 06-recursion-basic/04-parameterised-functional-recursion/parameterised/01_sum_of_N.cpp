#include<bits/stdc++.h>
using namespace std;

/*
sum of N
*/

void sumOfN(int i, int sum){
    if(i < 1){
        cout << "sum: " << sum << endl;
        return;
    }

    sumOfN(i-1, sum+i);
}

int main(){
    int n;
    
    cout << "n: ";
    cin >> n;

    sumOfN(n, 0);
    
    return 0;
}