#include <iostream>
using namespace std;

int main() {
    double distance, speed, time;

    cout << "Enter distance (in km): ";
    cin >> distance;
    cout << "Enter time (in hours): ";
    cin >> time;

    if (time != 0) {
        speed = distance / time;
        cout << "Speed = " << speed << " km/h" << endl;
    } else {
        cout << "Time cannot be zero!" << endl;
    }

    return 0;
}
