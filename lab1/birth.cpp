#include <iostream>
using namespace std;

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;

    // Input first birthdate
    cout << "Enter first birthdate (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;

    // Input second birthdate
    cout << "Enter second birthdate (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;

    // Ensure first date is earlier
    if (d1 > d2) {
        d2 += 30;
        m2--;
    }

    if (m1 > m2) {
        m2 += 12;
        y2--;
    }

    int days = d2 - d1;
    int months = m2 - m1;
    int years = y2 - y1;

    cout << "\nAge Difference is:\n";
    cout << years << " Years "
         << months << " Months "
         << days << " Days" << endl;

    return 0;
}
