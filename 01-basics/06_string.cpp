#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "kaustav";

    int len = s.size();
    cout << "last index: " << s[len-1] << endl;

    s[len-1] = 'm';

    cout << s[len-1] << endl;

    cout << s[0] << s[1] << endl;
    return 0;
}