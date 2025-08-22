#include<bits/stdc++.h>
using namespace std;

int palindrome(int i, string &str){

    if(i > (str.size()/2)){
        return true;
    }

    if(str[i] != str[str.size()-i-1]){
        return false;
    }

    return palindrome(i+1, str);

}

int main(){

    string str;
    cout << "enter string: ";
    cin >> str;

    if(palindrome(0, str)){
        cout << "this is a palindrome" << endl;
    } else {
        cout << "this is NOT a palindrome" << endl;
    }
}
