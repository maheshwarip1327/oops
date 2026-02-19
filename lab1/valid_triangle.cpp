#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        cout << "These sides can form a valid triangle." << endl;
    } else {
        cout << "These sides cannot form a triangle." << endl;
    }

    return 0;
}
