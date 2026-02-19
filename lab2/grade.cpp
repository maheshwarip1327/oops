#include <iostream>
using namespace std;

int main() {
    const int MIN_ATTENDANCE = 75;
    int students;
    
    cout << "Enter number of students: ";
    cin >> students;

    int i = 0;
    while (i < students) {
        int marks[5], total = 0, attendance;
        float avg;

        cout << "\nStudent " << i + 1 << endl;

        // Input marks using for loop
        for (int j = 0; j < 5; j++) {
            cout << "Enter marks of subject " << j + 1 << ": ";
            cin >> marks[j];
            total += marks[j];
        }

        avg = total / 5.0;

        cout << "Enter attendance percentage: ";
        cin >> attendance;

        // Grade using if-else ladder
        char grade;
        if (avg >= 90)
            grade = 'A';
        else if (avg >= 80)
            grade = 'B';
        else if (avg >= 70)
            grade = 'C';
        else if (avg >= 60)
            grade = 'D';
        else
            grade = 'F';

        // Promotion using nested if
        if (avg > 50) {
            if (attendance > MIN_ATTENDANCE)
                cout << "Status: Promoted\n";
            else
                cout << "Status: Not Promoted (Low Attendance)\n";
        } else {
            cout << "Status: Not Promoted (Low Marks)\n";
        }

        cout << "Average Marks: " << avg << endl;
        cout << "Grade: " << grade << endl;

        i++;
    }

    return 0;
}
