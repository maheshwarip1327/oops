#include <iostream>
using namespace std;

int main() {
    const double WEIGHT_THEORY = 0.7;
    int students = 1;

    while (students) {
        int marks[5], sports;
        double total = 0, avg, gradePoints;
        bool pass = true;

        
        for (int i = 0; i < 5; i++) {
            cout << "Enter marks of subject " << i + 1 << ": ";
            cin >> marks[i];
            total += marks[i];

            if (marks[i] <= 35)
                pass = false;
        }

        avg = total / 5;

        
        gradePoints = avg * WEIGHT_THEORY;

        
        char rank = (avg > 90) ? 'A' : 'B';

        cout << "\nAverage: " << avg << endl;
        cout << "Grade Points: " << gradePoints << endl;
        cout << "Rank Category: " << rank << endl;

    
        if (pass && avg > 35)
            cout << "Result: PASS\n";
        else
            cout << "Result: FAIL\n";

        
        cout << "Enter sports score: ";
        cin >> sports;

        if (avg > 85 || sports > 80)
            cout << "Scholarship: Eligible\n";
        else
            cout << "Scholarship: Not Eligible\n";

        cout << "\nEnter 1 to process next student, 0 to exit: ";
        cin >> students;
        cout << "---------------------------\n";
    }

    return 0;
}
