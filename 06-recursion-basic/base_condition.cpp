#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
void count(){

    if(cnt > 10) return; // base condition 
   
    cout << "count: " << cnt << endl;
    cnt++;

    count();
}

int main(){

    count();
    return 0;
}