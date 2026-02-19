#include<iostream>
using namespace std;

int main() {
    int timeOfDay, ambulance;
    cin >> timeOfDay >> ambulance;

    int GREEN, YELLOW = 5, RED;

    switch(timeOfDay) {
        case 1: GREEN = 40; RED = 20; break;
        case 2: GREEN = 30; RED = 25; break;
        case 3: GREEN = 25; RED = 30; break;
        default: GREEN = 30; RED = 25;
    }

    int cycle = 0;
    while(cycle < 10) {
        for(int j = 1; j <= 4; j++) {
            cout << "Cycle " << cycle+1 << " Junction " << j << ": ";
            if(ambulance)
                cout << "Emergency GREEN\n";
            else
                cout << "GREEN=" << GREEN << " YELLOW=" << YELLOW << " RED=" << RED << endl;
        }
        cycle++;
    }
    return 0;
}
