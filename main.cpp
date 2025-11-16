// ------------- FILE HEADER -------------
// Author ✅: Ella Henner
// Assignment ✅: 7
// Date ✅: 11/13/25
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 7
// Participation ✅: 81%
// Challenge ✅: 71%
// Labs ✅: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
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
#include <string>

using namespace std;

// constants
double assigWeight = 0.6;
double midtermWeight = 0.2;
double finalWeight = 0.2;

// function prototypes
void welcome();
int readInt(string prompt);
double readScore(string prompt);
double assignAverage(int numAssigns);
double calcFinalScore(double assignAvg, double midterm, double finalExam);
char calcLetterGrade(double finalScore);

// main
int main() {
  
welcome();

int numAssigns = readInt("Enter the number of assignments (0 to 10): ");

double assignAvg = assignAverage(numAssigns);

double midterm = readScore("Enter your midterm exam score: ");
double finalExam = readScore("Enter your final exam score: ");

double finalScore = calcFinalScore(assignAvg, midterm, finalExam);
char letterGrade = calcLetterGrade(finalScore);

cout << fixed << setprecision(1);
cout << "\nYour Final Numeric score is: " << finalScore << endl;
cout << "Your Final Grade is: " << letterGrade << endl << endl;

cout << "Thank you for using my Grade Calculator!" << endl;

  return 0;
}

void welcome() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl << endl;
}
int readInt(string prompt) {
  int aNum;
  bool valid = false;

  while (valid == false) {
    cout << prompt;
    cin >> aNum;

  if (!cin.fail() && aNum >= 0 && aNum <= 10) {
    valid = true;
  }
  else {
    cout << "Illegal Value! Please try again!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
  }
}
return aNum;
}

double readScore(string prompt) {
  double score;
  bool valid = false;

  while (valid == false) {
    cout << prompt;
    cin >> score;

  if (!cin.fail() && score >= 0 && score <= 4) {
    valid = true;
  }
  else {
    cout << "Illegal Score! Please try again!" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
  }
  }
return score;
}

double assignAverage(int numAssigns) {
  double aSum = 0.0;
  if (numAssigns == 0.0) {
    return 0.0;
  }
for (int i = 1; i <= numAssigns; ++i) {
  double aScore = readScore("Enter score: " + to_string(i) + ": ");
  aSum += aScore;
}
return aSum / numAssigns;
}

double calcFinalScore(double assignAvg, double midterm, double finalExam) {
  return (assignAvg * assigWeight) + (midterm * midtermWeight) + (finalExam * finalWeight);
}

char calcLetterGrade(double finalScore) {
  if (finalScore >= 3.3) {
  return 'A';
  }
else if (finalScore >= 2.8) {
  return 'B';
}
else if (finalScore >= 2.0) {
  return 'C';
}
else if (finalScore >= 1.2) {
  return 'D';
}
else {
  return 'F';
}
}

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

Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
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
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!


Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!
*/