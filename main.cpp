// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;

void WelcomeMessage() {
    cout << "Welcome to my final grade calculator!" << endl;
    cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;
}
int readInt(string prompt) {
    cout << prompt << endl;
    int input = 0;
    cin >> input;
    return input;
}
double readScore(string prompt) {
    cout << prompt;
    int input = 0;
    bool valid = false;
    while (!valid) {
        cin >> input;
        if (input >= 0 && input <= 4) {
            valid = true;
        }
    }
    return input;
}










int main(int argc, char* argv[]) {
    int numAssignments = 0;
    WelcomeMessage();
    //read assignments from user
    numAssignments = readInt("Enter the number of assignments (0 to 10): ");
    
    //read scores
    for (int i = 1; i <= numAssignments; i++) {
        
    }
    
    
    double score = readScore("enterscore");
    









  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/