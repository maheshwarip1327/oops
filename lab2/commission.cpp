#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double COMMISSION = 0.02;
    double cash = 50000, value = 0;
    double startCash = cash;

    for (int i = 1; i <= 3; i++) {
        char type;
        int shares;
        double price, amount;

        cout << "\nB=Buy, S=Sell: ";
        cin >> type;
        cout << "Shares: ";
        cin >> shares;
        cout << "Price: ";
        cin >> price;

        amount = shares * price;
        amount += amount * COMMISSION;

        if (type == 'B' || type == 'b') {
            cash -= amount;
            value += shares * price;
        } else {
            cash += shares * price;
            value -= shares * price;
        }
    }

    double total = cash + value;
    double profit = total - startCash;
    double percent = (profit / startCash) * 100;

    cout << fixed << setprecision(2);
    cout << "\nCash: " << cash << endl;
    cout << "Stock Value: " << value << endl;
    cout << "Total Value: " << total << endl;
    cout << "Profit/Loss: " << percent << "%\n";

    if (profit > 0 && percent > 5)
        cout << "Suggestion: SELL\n";
    else if (profit < 0 || percent < 0)
        cout << "Suggestion: HOLD\n";
    else
        cout << "Suggestion: HOLD\n";

    return 0;
}
