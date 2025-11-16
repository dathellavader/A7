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
double calcFinalScore(double assignAvg, double midterm, double final);
char calcLetterGrade(double finalScore);

// main
int main() {
  
welcome();

int numAssigns = readInt("Enter the number of assignments (0 to 10): ");



  return 0;
}

void welcome() {
  cout << "Welcome to my Final Grade Calculator!" << endl;
  cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
  cout << "The number of assignments must be between 0 and 10." << endl;
  cout << "All scores entered must be between 0 and 4." << endl;
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
    cout << prompt
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
  if (numAssigns == 0.0) {
    return 0.0;
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
Copy from assignment document.

*/