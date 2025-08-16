#include<bits/stdc++.h>
using namespace std;

void explainPair(){

    pair<int, int> p = {1, 3};
    cout << "p.first: " << p.first << endl; 
    cout << "p.second: " << p.second << endl;

    cout << "====================================================================" << endl;

    pair<int, pair<int, int>> p2 = {1, {4, 5}};
    cout <<"p2.first: " << p2.first << endl; 
    cout << "p2.second.first: " << p2.second.first << endl; 
    cout << "p2.second.second: " << p2.second.second << endl;

    cout << "====================================================================" << endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {4, 5} };

    cout << "arr[0].first: " << arr[0].first << endl;

}

void explainPair2(){


    // Pair lets you store TWO different data types together in one container
    // Like a box that can hold one integer AND one character at the same time
    // Syntax: pair<first_type, second_type> name = {value1, value2};

    pair<int, char> pa = {1, 'a'};

    cout << "pa.first: " << pa.first << endl;    // Prints: 1 (the integer)
    cout << "pa.second: " << pa.second << endl;  // Prints: a (the character)

    // Real-world examples:
    pair<string, int> student = {"Rahul", 85};     // Name and marks
    cout << "student name: " << student.first << endl;
    cout << "student marks: " << student.second << endl;

    pair<int, string> employee = {101, "Manager"}; // ID and designation
    cout << "employee ID: " << employee.first << endl;
    cout << "employee designation: " << employee.second << endl;

    pair<double, bool> product = {199.99, true};   // Price and availability
    cout << "product price: " << product.first << endl;
    cout << "product availability: " << product.second << endl;
}

int main(){ 
    explainPair();
    cout << "=========================== end of function 1 ===========================" << endl;
    explainPair2();
    return 0;
}