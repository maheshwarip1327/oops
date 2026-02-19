#include <iostream>
using namespace std;

// Create dynamic array
int* createArray(int size) {
    return new int[size];
}

// Calculate mean
double calculateMean(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];

    return (double)sum / size;
}

// Resize array
void resizeArray(int*& arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];

    for(int i = 0; i < oldSize; i++)
        newArr[i] = arr[i];

    delete[] arr;
    arr = newArr;
}

int main() {
    int size = 5;
    int* arr = createArray(size);

    cout << "Enter 5 marks:\n";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Mean = " << calculateMean(arr, size) << endl;

    resizeArray(arr, size, 10);
    cout << "Array resized to 10\n";

    delete[] arr;
    return 0;
}
