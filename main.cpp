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
// A. INPUT ✅: yes
// B. OUTPUT ✅: yes
// C. CALCULATIONS ✅: yes
// D. LOGIC and ALGORITHMS ✅: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count: 1  


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// constants
const double assigWeight = 0.6;
const double midtermWeight = 0.2;
const double finalWeight = 0.2;

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
  if (numAssigns == 0) {
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
Program Name: Final Exam Calculator

Program Description:

Design:
A. INPUT
int aNum         
double score       
double midterm      
double finalExam    

B. OUTPUT
double finalScore
char letterGrade

C. CALCULATIONS
// constants
double assigWeight = 0.6;
double midtermWeight = 0.2;
double finalWeight = 0.2;
// calculations
aSum += aScore
aSum / numAssigns
(assignAvg * assigWeight) + (midterm * midtermWeight) + (finalExam * finalWeight)

D. LOGIC and ALGORITHMS
// funct protoypes
void welcome()
int readInt(string prompt)
double readScore(string prompt)
double assignAverage(int numAssigns)
double calcFinalScore(double assignAvg, double midterm, double finalExam)
char calcLetterGrade(double finalScore);
// main
main() {
    welcome();

    int numAssigns = readInt("Enter the number of assignments (0 to 10): ");

    double assignAvg = assignAverage(numAssigns);

    double midterm = readScore("Enter your midterm exam score: ");
    double finalExam = readScore("Enter your final exam score: ");

    double finalScore = calcFinalScore(assignAvg, midterm, finalExam);
    char letterGrade = calcLetterGrade(finalScore);

    fixed << setprecision(1)
    DISPLAY "Your Final Numeric score is: " << finalScore
    DISPLAY "Your Final Grade is: " << letterGrade

    RETURN 0;
}

VOID welcome() {
  DISPLAY "Welcome to my Final Grade Calculator!"
  DISPLAY "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!"
  DISPLAY "The number of assignments must be between 0 and 10."
  DISPLAY "All scores entered must be between 0 and 4."
}
INT readInt(string prompt) {
  int aNum
  bool valid = false

  WHILE (valid == false) {
    DISPLAY prompt
  INPUT aNum

  IF (!cin.fail() && aNum >= 0 && aNum <= 10) {
    valid = true
  }
  ELSE {
    DISPLAY "Illegal Value! Please try again!"
    cin.clear()
    cin.ignore(1000, '\n')
  }
}
RETURN aNum;
}

DOUBLE readScore(string prompt) {
  double score
  bool valid = false

  WHILE (valid == false) {
    DISPLAY prompt
    INPUT score

  IF (!cin.fail() && score >= 0 && score <= 4) {
    valid = true
  }
  else {
    DISPLAY "Illegal Score! Please try again!"
    cin.clear()
    cin.ignore(1000, '\n')
  }
  }
RETURN score;
}

DOUBLE assignAverage(int numAssigns) {
  double aSum = 0.0
  IF (numAssigns == 0.0) {
    RETURN 0.0;
  }
FOR (int i = 1; i <= numAssigns; ++i) {
  double aScore = readScore("Enter score: " + to_string(i) + ": ")
  // calculate aSum
}
RETURN // calculate avg
}

DOUBLE calcFinalScore(double assignAvg, double midterm, double finalExam) {
  RETURN // calculate final score

CHAR calcLetterGrade(double finalScore) {
  IF (finalScore >= 3.3) {
  return 'A'
  }
ELSE IF (finalScore >= 2.8) {
  return 'B'
}
ELSE IF (finalScore >= 2.0) {
  return 'C'
}
ELSE IF (finalScore >= 1.2) {
  return 'D'
}
ELSE {
  return 'F'
}
}


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