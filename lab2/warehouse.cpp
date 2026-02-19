#include <iostream>
using namespace std;

int main() {
    const double URGENT_THRESHOLD = 20.0;
    double stock = 100, sales[7], total;
    int choice;

    do {
        total = 0;


        for (int i = 0; i < 7; i++) {
            cout << "Enter sales for day " << i + 1 << ": ";
            cin >> sales[i];
            total += sales[i];
        }

        stock -= total;
        cout << "Current Stock: " << stock << endl;

        
        if (stock < 50) {
            cout << "Reorder needed.\n";

            
            switch (stock < URGENT_THRESHOLD) {
                case 1:
                    cout << "Vendor1 selected (Fast delivery)\n";
                    stock += 60;
                    break;
                case 0:
                    cout << "Vendor2 selected (Cheap)\n";
                    stock += 40;
                    break;
            }
        } else {
            cout << "Stock sufficient.\n";
        }

        cout << "Projected Stock: " << stock << endl;

        cout << "\nContinue? (1-Yes / 0-No): ";
        cin >> choice;

    } while (choice == 1);

    return 0;
}
