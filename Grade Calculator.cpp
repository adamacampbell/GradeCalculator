/*
 *Author: Adam Alexander Campbell
 */
#include <iostream>
#include <string>
using namespace std;

string modName;
int modCWNum;
int examWeight = 100;
double passBrackets[4] = {70.00, 60.00, 50.00, 40.00};
int currentPercent = 0;

int main() {
  cout << "Enter Module Name\n";
  cin >> modName;
  cout << "Enter Number of Courseworks\n";
  cin >> modCWNum;
  //User input for module name and number of courseworks.
  double modCWWeight[modCWNum];
  double modCWGrade[modCWNum];
  double modCWPer[modCWNum];
  //Arrays of lenght modCWNum to hold coursework weight and grade.

  for(int i = 0; i < modCWNum; i++){
    cout << "Enter Coursework " << i+1 << " Weight in %\n";
    cin >> modCWWeight[i];
    cout << "Enter Coursework " << i+1 << " Grade in %\n";
    cin >> modCWGrade[i];

    modCWPer[i] = (double)modCWWeight[i] / (double)100 * (double)modCWGrade[i];
    examWeight -= modCWWeight[i];
    currentPercent += modCWPer[i];
  }
  //Loop for amount of courseworks and have user enter their weight and grade.

  for (int i = 0; i < 4; i++) {
    passBrackets[i] -= (double)currentPercent;
  }
  //Calculate new pass brackets.

  cout << modName << "\n";
  cout << "Exam Weight " << examWeight << "%\n";
  cout << "Current Percent of Module " << currentPercent << "%\n";
  cout << "Exam % Required for an A: " << passBrackets[0] << "%\n";
  cout << "Exam % Required for a B: " << passBrackets[1] << "%\n";
  cout << "Exam % Required for a C: " << passBrackets[2] << "%\n";
  cout << "Exam % Required for a D: " << passBrackets[3] << "%\n";
  //Output data.
}
