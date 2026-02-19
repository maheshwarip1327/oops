#include<iostream>
using namespace std;

int arraySum(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += *(arr + i);
    return sum;
}

int binarySearch(int* arr, int size, int key) {
    int low = 0, high = size - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void reverseArray(int* arr, int size) {
    for(int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[100];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum: " << arraySum(arr, n) << endl;

    int key;
    cin >> key;
    cout << "Search Position: " << binarySearch(arr, n, key) << endl;

    reverseArray(arr, n);
    cout << "Reversed: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
