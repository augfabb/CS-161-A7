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
    while (input < 0 || input > 10) {
        cout << "Invalid input please retry!" << endl;
        cout << prompt;
        cin >> input;
    }
    return input;
}
double readScore(string prompt) {
    
    double input = 0;
    bool valid = false;
    while (!valid) {
        cout << prompt;
        cin >> input;
        if (input >= 0 && input <= 4) {
            valid = true;
        }
        else {
            cout << "Invalid input please retry" << endl;
        }
    }
    return input;
}
double assignAverage(int numAssigns){
    double totalScore = 0.0;
    double score = 0.0;
    if (numAssigns == 0) {
        return 0.0;
    }
    else {
        for (int i = 1; i <= numAssigns; i++) {
        string scorePrompt = "Enter score " + to_string(i) + ": ";
        score = readScore(scorePrompt);
        totalScore += score;
        }
        double average = totalScore / numAssigns;
        return average;

     }
}
double calcFinalScore(double assignAvg, double midterm, double final) {
    double finalScore = (assignAvg * 0.60) + (midterm * 0.20) + (final * 0.20);

    return finalScore;
}
char calcLetterGrade(double finalScore) {
    char letterGrade;
    if (finalScore >= 3.3) {
        letterGrade = 'A';
    }
    else if (finalScore >=2.8) {
        letterGrade = 'B';
    }
    else if (finalScore >=2.0) {
        letterGrade = 'C';
    }
    else if (finalScore >=1.2) {
        letterGrade = 'D';
    }
    else {
        letterGrade = 'F';
    }
    return letterGrade;

}   










int main(int argc, char* argv[]) {
    int numAssignments = 0;
    double averageScore = 0;
    double midScore = 0;
    double finalScore = 0;
    double totalgrade = 0;
    WelcomeMessage();
    //read assignments from user
    numAssignments = readInt("Enter the number of assignments (0 to 10): ");
    
    cout << fixed << setprecision(1);

    //read scores + calc average
    averageScore = assignAverage(numAssignments);

    //read Midterm and Final score
    midScore = readScore("Enter your midterm exam score: ");
    finalScore = readScore("Enter your final exam score: ");

    //output score
    totalgrade = calcFinalScore(averageScore, midScore, finalScore);
    cout << "Your Final Numeric score is " << totalgrade << endl;

    char letterGrade = calcLetterGrade(totalgrade);
    cout << "Your Final Grade is " << letterGrade << endl;
    cout << "Thanks for using my program!";


  return 0;
}

/*Function implementations (if any)
void WelcomeMessage
int readInt(string prompt)
double readScore(string prompt)
double assignAverage(int numAssigns)
double calcFinalScore(double assignAvg, double midterm, double final)
char calcLetterGrade(double finalScore)



// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
int numAssignments = 0;
double averageScore = 0;
double midScore = 0;
double finalScore = 0;

B. OUTPUT
double totalgrade = 0;
char letterGrade;


C. CALCULATIONS
calcFinalScore(averageScore, midScore, finalScore);
calcLetterGrade(totalgrade);



D. LOGIC and ALGORITHMS
    CALL WelcomeMessage();
    //read assignments from user
    numAssignments = CALL readInt("Enter the number of assignments (0 to 10): ");
    
    SET PRECISION TO 1

    //read scores + calc average
    averageScore =  CALL assignAverage(numAssignments);

    //read Midterm and Final score
    midScore =  CALL readScore("Enter your midterm exam score: ");
    finalScore =  CALL readScore("Enter your final exam score: ");

    //output score
    totalgrade = CALL calcFinalScore(averageScore, midScore, finalScore);
    OUTPUT "Your Final Numeric score is " + totalgrade +endl;

    char letterGrade = calcLetterGrade(totalgrade);
    OUTPUT "Your Final Grade is " + letterGrade + endl;
    OUTPUT  "Thanks for using my program!";



SAMPLE RUNS
Welcome to my final grade calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 
6
Enter score 1: 3.4
Enter score 2: 4
Enter score 3: 2.5
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thanks for using my program!

Welcome to my final grade calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 
12
Invalid input please retry!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4
Enter score 2: 4
Enter score 3: 2.5
Enter score 4: 5.5
Invalid input please retry
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thanks for using my program!

*/