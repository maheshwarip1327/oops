#include <iostream>
using namespace std;

const int SQRT_CHECK = 1000;


bool isLeapYear(int year) {
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false;
}


bool isPrime(int num) {
    if (num <= 1)
        return false;

    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    
    for (int i = 3; i * i <= num && i <= SQRT_CHECK; i += 2) {
        if (num % i == 0)
            return false;
    }

    return true;
}


void printFibonacci(int N) {
    if (N <= 0) {
        cout << "Fibonacci sequence: No terms to display (N = 0)" << endl;
        return;
    }

    long long a = 0, b = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= N; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
}

int main() {
    int year, num, N;

    cout << "Enter year: ";
    cin >> year;

    cout << "Enter number to check prime: ";
    cin >> num;

    cout << "Enter number of Fibonacci terms: ";
    cin >> N;

    bool leapFlag = isLeapYear(year);
    cout << "\nLeap Year Check:" << endl;
    if (leapFlag)
        cout << year << " is a Leap Year." << endl;
    else
        cout << year << " is NOT a Leap Year." << endl;

    
    bool primeFlag = isPrime(num);
    cout << "\nPrime Number Check:" << endl;
    if (primeFlag)
        cout << num << " is a Prime Number." << endl;
    else
        cout << num << " is NOT a Prime Number." << endl;

    cout << "\nFibonacci Series:" << endl;
    printFibonacci(N);

    return 0;
}
