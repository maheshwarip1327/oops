#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double weight, height;
    int age;
    char gender;

    const double BMI_UNDER  = 18.5;
    const double BMI_NORMAL = 24.9;
    const double BMI_OVER   = 29.9;

    double bmi;
    char grade;


    bool isUnderweight = false;
    bool isNormal = false;
    bool isOverweight = false;
    bool isObese = false;

    
    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter height (meters): ";
    cin >> height;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter gender (M/F): ";
    cin >> gender;


    bmi = weight / (height * height);

    
    if (bmi < BMI_UNDER) {
        isUnderweight = true;
    } else if (bmi <= BMI_NORMAL) {
        isNormal = true;
    } else if (bmi <= BMI_OVER) {
        isOverweight = true;
    } else {
        isObese = true;
    }


    if (age < 30) {
        if (isNormal) grade = 'A';
        else if (isOverweight) grade = 'B';
        else if (isUnderweight) grade = 'C';
        else grade = 'D';
    } else {
        if (isNormal) grade = 'B';
        else if (isOverweight) grade = 'C';
        else if (isUnderweight) grade = 'C';
        else grade = 'D';
    }
    cout << fixed << setprecision(2);
    cout << "\nBMI: " << bmi << endl;

    if (isUnderweight) cout << "Status: Underweight\n";
    if (isNormal)      cout << "Status: Normal\n";
    if (isOverweight)  cout << "Status: Overweight\n";
    if (isObese)       cout << "Status: Obese\n";

    cout << "Fitness Grade: " << grade << endl;

    return 0;
}
