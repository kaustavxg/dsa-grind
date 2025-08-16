#include<bits/stdc++.h>
using namespace std;

//# Why do we need vectors?
/*
Think of arrays like booking a hotel room for 5 people, but only 3 people show up.

Regular Array Problems:
- You must decide the size beforehand (like booking 5 hotel rooms)
- If you only use 3 spaces, the other 2 rooms stay empty but you still pay for them
- If more people come later, you can't add extra rooms - the size is fixed!
- Memory gets wasted for unused spaces

Example: int array[5] = {1, 2, 3, _, _}
         ↑ Using only 3 spaces, but reserved 5

Vector Benefits:
- dynamic in nature
- Starts small and grows automatically when needed
- No memory waste - only uses what you actually store
- Can add or remove elements anytime
- Like having a flexible hotel that adds rooms when guests arrive!
- when you don't know the size of a data structure, then you use vectors

*/

void explainVector(){

    // This is the vector's name. It is an empty container right now.
    vector<int> v;

    // Adding a new element to the vector. 'push_back' adds the value '1' to the end.
    v.push_back(1); //# v now contains: {1}

    //# 'emplace_back' is another way to add an element. It's often more efficient.
    // It directly constructs the element inside the vector's memory, avoiding a copy operation.
    v.emplace_back(2); // v now contains: {1, 2}

    //! =============== Why is 'emplace_back' faster than 'push_back'? ===============
    // 'push_back' first creates a temporary object and then copies it into the vector.
    // 'emplace_back' constructs the object directly in the vector's memory, which is faster, especially for complex objects.

    // Example using a pair (a simple object with two values)
    vector<pair<int, int>> vec;

    // With 'push_back', you must first create a pair object, then push it.
    vec.push_back({1, 2});

    // With 'emplace_back', you just pass the values, and it builds the pair on the spot.
    vec.emplace_back(1, 2);

    //! ==============================================================================

    //! ======= How to create a vector with a specific size and default values =======
    vector<int> vect(5, 100); // This creates a vector with 5 elements, all set to 100.
    // vect will be: {100, 100, 100, 100, 100}

    // How to create a vector with a specific size but no initial values
    vector<int> vecto(5); // This creates a vector of size 5. The values will be 0 by default.
    // vecto will be: {0, 0, 0, 0, 0}
    // If you're working with a class or struct, these values might be "garbage" (random data), but for built-in types like 'int', they are usually initialized to 0.

    // You can create a copy of a vector just like any other variable.
    vector<int> v1(5, 20); // v1 is: {20, 20, 20, 20, 20}
    vector<int> v2(v1);   // v2 is now a copy of v1: {20, 20, 20, 20, 20}

    //! =================================== Iterators ===================================
    // An iterator is a pointer-like object that points to an element in a container.
    //# It doesn't hold the value itself, but its memory address.
    vector<int>::iterator it = v.begin(); // 'v.begin()' returns an iterator pointing to the first element.

    // Move the iterator to the next element.
    it++;

    // Use the dereference operator '*' to access the value the iterator is pointing to.
    cout << *(it) << " ";

    // Move the iterator forward by 2 positions.
    it = it + 2;

    // 'v.end()' returns an iterator to the memory address right after the last element.
    // It's a "past-the-end" position. It's useful for loops.
    vector<int>::iterator it = v.end();

    // These are other types of iterators. You don't need to worry about them for now.
    // 'rbegin()' points to the last element (start of the reverse container).
    // 'rend()' points to the position before the first element (end of the reverse container).
    vector<int>::reverse_iterator it = v.rbegin();
    vector<int>::iterator it = v.end();
}

void explainVector2()
{

    // You can use a 'for' loop to print all elements of a vector.
    vector<int> v;

    // The loop starts at the beginning of the vector and continues until it reaches the end.
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << endl;
    }

    // A more modern and readable way to write the same loop using 'auto'.
    //# The 'auto' keyword automatically figures out the data type.
    // For example, if you write 'auto a = 5', the compiler knows 'a' is an integer.
    // In this case, 'auto' correctly identifies 'it' as 'vector<int>::iterator'.
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
}

void vectorDelete(){

    vector<int> v;

    // {10, 20, 12, 23}
    v.erase(v.begin()+1); // v.erase(<jo location ka address chahiye delete karne ko>)
    // begin+1 => 20 ko delete kar dega

    // Agar mere paas vector hai: {10, 20, 30, 40, 50} aur mujhe 20, 30 together delete karna hai
    // Toh matlab yeh continuous elements ko delete karega, not like 20 aur 40 ko separately
    // Jaise agar continuous chahiye toh: 20-30, ya 30-40-50, ya sirf 20-30-40 etc etc.

    // Range deletion ka example:
    vector<int> v = {10, 20, 30, 40, 50};

    // Agar 20 aur 30 dono delete karna hai (continuous)
    v.erase(v.begin()+1, v.begin()+3); 
    // Start: begin+1 (20 ka position)
    // End: begin+3 (40 ka position, lekin 40 delete nahi hoga)
    // Result: {10, 40, 50}

    //! Dhyan do: end position include NAHI hota deletion mein
    // [start, end) - start include, end exclude

    // Agar non-continuous delete karna hai (jaise 20 aur 40)
    // Toh do baar erase karna padega:
    v.erase(v.begin()+1); // Pehle 20 delete
    v.erase(v.begin()+2); // Ab 40 delete (index shift ho gaya hai!)

    // Better approach for non-continuous deletion:
    // Peeche se start karo taaki index shift na ho
    v.erase(v.begin()+3); // Pehle 40 delete 
    v.erase(v.begin()+1); // Phir 20 delete

    //# .erase(<starting address>, <ending address>)

}

void vectorInsert(){

    vector<int> v;

    vector<int> v(2, 100); // {100, 100}

    // i want to insert a number right at the beginning
    v.insert(v.begin(), 300); // insert 300 right at the beginning 
    // {300, 10, 10, 20, 100, 100}

    // now i want to insert two number at a random index
    //? syntax: v.insert(<position>, <number of elements i want to add>, <value to insert>)
    //# example: v.insert(v.begin()+2,  3,     99) 
    //                     ↑ position   ↑count ↑value
    //           means index 2 pe, 3 times, 99 insert karo

    v.insert(v.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    // size
    v.size();

    // remove the last element from the vector
    //{10, 20}
    v.pop_back(); // current vector now: {10}

    // swapping vectors
    vector<int> v1 = {10, 20};
    vector<int> v2 = {30, 40};   
    v1.swap(v2); // v1 -> {30, 40}  //v2 -> {10, 20}

    v.clear(); // erases the entire vector



}

int main(){
    // explainVector();
    // explainVector2();
    // vectorDelete();
    vectorInsert();
    return 0;
}