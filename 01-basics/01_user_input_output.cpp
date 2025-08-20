// =============================================
// HEADER FILES & LIBRARIES
// =============================================

// "Mother of all libraries" - includes ALL standard C++ libraries
#include<bits/stdc++.h>  

// Alternative way (more professional but longer):
// #include<iostream>    // For cin, cout, endl
// using namespace std;  // So we don't have to write std::cout every time

using namespace std;

// =============================================
// MAIN FUNCTION
// =============================================

int main() {
    // Variable declaration
    int x, y;
    
    // Getting input from user
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    // Processing and output
    cout << "value of x+y: " << x+y << endl;
    
    // =============================================
    // WHY RETURN 0?
    // =============================================
    
    return 0;  // Return 0 = "Program executed successfully"
               // Return 1 = "Program failed/error occurred"  
               // Return 2,3,4... = Different error codes
               // OS uses this to know if your program worked or failed
               // You can skip this in modern C++ - compiler adds it automatically
}

// =============================================
// REVISION NOTES
// =============================================

/*
KEY CONCEPTS FOR REVISION:

1. HEADER FILES:
   - #include<iostream> for basic input/output (cin, cout)
   - #include<bits/stdc++.h> includes ALL libraries (good for competitive programming)
   - bits/stdc++.h is non-standard but widely used

2. NAMESPACE:
   - using namespace std; lets you write cout instead of std::cout
   - Without it: std::cout << "hello" << std::endl;
   - With it: cout << "hello" << endl;

3. VARIABLES:
   - int x, y; declares two integer variables
   - Must declare before using

4. INPUT/OUTPUT:
   - cout << "text"; prints text to screen
   - cin >> variable; gets input from user and stores in variable
   - endl; adds new line and flushes buffer

5. RETURN STATEMENT:
   - return 0; means "program finished successfully"
   - return 1; means "program had an error"
   - Operating system uses this value
   - In main(), you can skip it (compiler adds return 0 automatically)

6. BASIC SYNTAX:
   - Every statement ends with semicolon ;
   - Code blocks use curly braces { }
   - main() is where program execution starts
*/