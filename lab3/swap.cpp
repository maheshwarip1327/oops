#include<iostream>
using namespace std;

void swapIntegers(void* a, void* b) {
    int* x = static_cast<int*>(a);
    int* y = static_cast<int*>(b);
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Before Swap: " << a << " " << b << endl;
    swapIntegers(&a, &b);
    cout << "After Swap: " << a << " " << b << endl;

    return 0;
}
