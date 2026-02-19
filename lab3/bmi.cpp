#include <iostream>
using namespace std;

// BMI function
double calculateBMI(double weight, double height) {
    return weight / (height * height);
}

// Recursive factorial
long factorial(int n) {
    if(n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Increment array using pointer
void incrementAll(int* arr, int size, int value) {
    for(int i = 0; i < size; i++)
        arr[i] += value;
}

// Inline square
inline double square(double x) {
    return x * x;
}

int main() {
    int choice;

    cout << "1.BMI  2.Factorial  3.Increment Array  4.Square\n";
    cin >> choice;

    if(choice == 1) {
        double w, h;
        cin >> w >> h;
        cout << "BMI = " << calculateBMI(w, h);
    }
    else if(choice == 2) {
        int n;
        cin >> n;
        cout << "Factorial = " << factorial(n);
    }
    else if(choice == 3) {
        int arr[5], val;
        cout << "Enter 5 numbers:\n";
        for(int i = 0; i < 5; i++)
            cin >> arr[i];

        cin >> val;
        incrementAll(arr, 5, val);

        for(int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    }
    else if(choice == 4) {
        double x;
        cin >> x;
        cout << "Square = " << square(x);
    }

    return 0;
}
