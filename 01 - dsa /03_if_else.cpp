#include<bits/stdc++.h>
using namespace std;

//Given marks of a student, print on the screen:

//Grade A if marks >= 90
//Grade B if marks >= 70
//Grade C if marks >= 50
//Grade D if marks >= 35
//Fail, otherwise.

int main(){

    int grade;
    cout << "marks = ";
    cin >> grade;

    if(grade >=90 && grade <= 100 ){
        cout << "Grade A" << endl;
    } else if(grade >= 75 && grade <= 89){
        cout << "Grade B" << endl;
    } else if(grade >= 50 && grade <= 74){
        cout << "Grade C" << endl;
    } else if(grade >= 35 && grade <= 49){
        cout << "Grade D" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}