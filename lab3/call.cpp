#include <iostream>
using namespace std;

void byValue(int x) {
    x += 5;
}

void byReference(int &x) {
    x += 5;
}

void byPointer(int *x) {
    *x += 5;
}

void modifyArray(int arr[], int size) {
    for(int i = 0; i < size; i++)
        arr[i] += 2;
}

int main() {
    int num = 10;
    int arr[3] = {1, 2, 3};

    cout << "Original num: " << num << endl;

    byValue(num);
    cout << "After byValue: " << num << endl;

    byReference(num);
    cout << "After byReference: " << num << endl;

    byPointer(&num);
    cout << "After byPointer: " << num << endl;

    modifyArray(arr, 3);
    cout << "Modified Array: ";
    for(int i = 0; i < 3; i++)
        cout << arr[i] << " ";

    return 0;
}
