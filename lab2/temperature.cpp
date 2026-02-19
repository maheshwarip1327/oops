#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double temp;
    char unit;

    const double C_TO_F = 9.0 / 5.0;   
    const double C_TO_K = 273.15;

    double celsius, fahrenheit, kelvin;

    cout << "Enter temperature value: ";
    cin >> temp;
    cout << "Enter unit (C/F/K): ";
    cin >> unit;

    
    if (unit == 'C' || unit == 'c') {
        celsius = temp;
    } else if (unit == 'F' || unit == 'f') {
        celsius = (temp - 32.0) / C_TO_F;
    } else if (unit == 'K' || unit == 'k') {
        celsius = temp - C_TO_K;
    } else {
        cout << "Invalid unit!" << endl;
        return 1;
    }

    // Convert from Celsius to other scales
    fahrenheit = (celsius * C_TO_F) + 32.0;
    kelvin = celsius + C_TO_K;

    // Output results
    cout << fixed << setprecision(2);
    cout << "Celsius: " << celsius << " C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;

    return 0;
}
