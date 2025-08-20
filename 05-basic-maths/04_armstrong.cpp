#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){

    int duplicate = n;
    int sum = 0;
    while(n > 0){
        int lastDigit = n % 10;
        sum = sum + (lastDigit*lastDigit*lastDigit);

        n = n / 10;
    }

    if(sum == duplicate){
        cout << "this is an amrstrong number: " << sum << endl;
    } else {
        cout << "this is not an amrstrong number: " << sum << endl;
    }

}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    armstrong(n);

    return 0;
}