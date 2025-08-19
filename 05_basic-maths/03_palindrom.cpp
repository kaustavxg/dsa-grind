#include<bits/stdc++.h>
using namespace std;

void palindrome(int n){

    if(n < 0){
        cout << "not a plaindrome(negative number): " << n << endl;
        return;
    }

    int duplicate = n;
    int reverseNum = 0;
    while(n != 0){
        int lastDigit = n % 10;
        cout << "last digit: " << lastDigit << endl;
        cout << "=================" << endl;

        n = n /10;
        reverseNum = (reverseNum * 10) + lastDigit;
    }
    if(reverseNum == duplicate){
        cout << "this is a palindrome: " << reverseNum << endl;
    } else {
        cout << "not a palindrome: " << reverseNum << endl;
    }
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;

    palindrome(n);

    return 0;
}