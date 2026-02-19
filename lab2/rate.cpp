#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, time;
    int years;

    const double SIMPLE_RATE = 0.07;
    const double COMPOUND_RATE = 0.08;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter time (years): ";
    cin >> time;

    years = (int)time;   


    double simpleInterest = principal * SIMPLE_RATE * time;

    
    double compoundInterest =
        principal * pow(1 + COMPOUND_RATE, years) - principal;

    cout << "\nSimple Interest: " << simpleInterest << endl;
    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}

