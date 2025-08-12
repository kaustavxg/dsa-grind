#include<bits/stdc++.h>
using namespace std;

// functions are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code multiple times

/*

# 1. void function
# 2. paramteric function
# 3. non parametrised

*/

//# void function -> does not return anything  

// void printName(string name){
//     cout << "hey " << name << endl;
// }

// take two numbers and print its sum

// int num1, num2;

// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }


// int main(){
//     // string name;
//     // cout << "enter name: " << endl;
//     // cin >> name;

//     int num1, num2;
//     cout << "enter num1: ";
//     cin >> num1;
//     cout << "enter num2: ";
//     cin >> num2;

//     int result = sum(num1, num2);
//     cout << result << endl;

   
//     // printName(name);
//     return 0;
// }


int main(){
    int num1, num2;
    // cin >> num1 >> num2;

    int minimum = min(num1, num2);
    cout << minimum << endl;
    cout << "num1: " << num1 << endl << "num2: " << num2 << endl;

    return 0;
}