#include<iostream>
using namespace std;

const int REORDER_LEVEL = 50;

int main() {
    int stock, quantity, totalProcessed = 0;
    char type;
    bool low_stock = false;

    cin >> stock;

    int count = 0;
    while(count < 3) {
        cin >> type >> quantity;
        stock += quantity;
        totalProcessed += abs(quantity);
        count++;
    }

    if(stock < REORDER_LEVEL)
        low_stock = true;

    cout << "Final Stock: " << stock << endl;
    cout << "Low Stock Alert: " << (low_stock ? "true" : "false") << endl;
    cout << "Total Quantity Processed: " << totalProcessed;

    return 0;
}
