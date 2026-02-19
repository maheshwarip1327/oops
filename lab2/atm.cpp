#include <iostream>
using namespace std;

int main() {
    double balance = 10000.0, amt;
    double trans[5];
    int choice, count = 0;

    do {
        cout << "\n===== BANK MENU =====\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Enquiry\n";
        cout << "4. Exit\n";
    
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount: ";
                cin >> amt;
                if (amt > 0) {
                    balance += amt;
                    if (count < 5) trans[count++] = amt;
                } else {
                    cout << "Invalid amount\n";
                }
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amt;
                if (amt > 0) {
                    if (amt <= balance) {
                        balance -= amt;
                        if (count < 5) trans[count++] = -amt;
                    } else {
                        cout << "Insufficient balance\n";
                    }
                } else {
                    cout << "Invalid amount\n";
                }
                break;

            case 3:
                cout << "Balance: " << balance << endl;
                break;

            case 4:
                cout << "\nFinal Balance: " << balance << endl;
                cout << "Transactions:\n";
                for (int i = 0; i < count; i++)
                    cout << trans[i] << endl;
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}
