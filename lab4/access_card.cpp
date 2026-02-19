#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter employee name: ";
    cin >> name;

    string firstTwo;

    if (name.length() >= 2)
        firstTwo = name.substr(0, 2);
    else
        firstTwo = name;  // if name has less than 2 characters

    string accessCard = "";

    for (int i = 0; i < 4; i++) {
        accessCard += firstTwo;
    }

    cout << "Generated Access Card Code: " << accessCard << endl;

    return 0;
}
