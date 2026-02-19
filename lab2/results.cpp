#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    const int MAX_MARKS = 100;
    const int SUBJECTS = 5;

    
    short students = 45;
    long collegeCode = 202600123L;
    char section = 'A';

    
    int marks[SUBJECTS];
    int total = 0;
    double average;
    bool pass;

    
    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < SUBJECTS; i++)
    {
        cin >> marks[i];
        total += marks[i];
    }

    average = total / (double)SUBJECTS;
    pass = (average >= 50.0);

    cout<<setfill('*')<<setw(10)<<""<<"I CSE EXAM RESULTS"<<setfill('*')<<setw(10)<<""<<endl;
    cout << fixed << setprecision(2);
    cout << "\nCollege Code: " << collegeCode << endl;
    cout << "Section: " << section << endl;
    cout << "Total Marks: " << total << "/" << (SUBJECTS * MAX_MARKS) << endl;
    cout << "Average: " << average << "%" << endl;
    cout << "Result: " << (pass ? "PASS" : "FAIL") << endl;

    return 0;
}
