#include<iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n1.Add 2.Sub 3.Mul 4.Div 5.Mod 6.Equal 7.Bitwise AND 8.Left Shift 9.Even/Odd 10.Exit\n";
        cin >> choice;

        if(choice != 10) {
            cin >> a >> b;
        }

        switch(choice) {
            case 1: cout << a + b; break;
            case 2: cout << a - b; break;
            case 3: cout << a * b; break;
            case 4: cout << a / b; break;
            case 5: cout << (int)a % (int)b; break;
            case 6: cout << (a == b); break;
            case 7: cout << ((int)a & (int)b); break;
            case 8: cout << ((int)a << (int)b); break;
            case 9: cout << ((int)a % 2 == 0 ? "Even" : "Odd"); break;
        }

    } while(choice != 10);

    return 0;
}
