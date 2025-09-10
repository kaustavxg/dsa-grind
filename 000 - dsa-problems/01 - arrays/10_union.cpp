// #include<bits/stdc++.h>
// using namespace std;

// int findUnion(int arr1[], int a, int arr2[] ,int b){

//     int i = 0;
//     int j = 0;

//     vector<int> unionArr;
//     while(i < a && j < b){
//         if(arr1[i] <= arr2[j]){
//             if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
//                 unionArr.push_back(arr1[i]);
//             }
//             i++;
//         } else {
//             if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
//                 unionArr.push_back(arr2[j]);
//             }
//             j++;
//         }
//     }

//     while(j < b){
//         if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
//                 unionArr.push_back(arr2[j]);
//         }
//         j++;
//     }

//     while(i < a){
//         if(arr1[i] <= arr2[j]){
//             if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
//                 unionArr.push_back(arr1[i]);
//         }
//         i++;
//     }




//     return 0;

// }

// int main(){
//     int a;
//     cout << "enter the size of array 1: ";
//     cin >> a;

//     int arr1[a];
//     cout << "enter the elements of array 1: ";
//     for(int i = 0; i < a; i++){
//         cin >> arr1[i];
//     }

//     cout << endl;

//     int b;
//     cout << "enter the size of array 2: ";
//     cin >> b;

//     int arr2[b];
//     cout << "enter the elements of array 2: ";
//     for(int i = 0; i < b; i++){
//         cin >> arr2[i];
//     }

//     cout << endl;

//     findUnion(arr1, n1, arr2, n2);
    

// }