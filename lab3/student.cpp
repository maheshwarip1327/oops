#include <iostream>
#include <cstring>
using namespace std;

// Sort names
void sortStudents(char* names[], int count) {
    for(int i = 0; i < count - 1; i++) {
        for(int j = 0; j < count - 1 - i; j++) {
            if(strcmp(names[j], names[j+1]) > 0) {
                char* temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }
}

// Search name
int findStudent(char* names[], int count, char* key) {
    for(int i = 0; i < count; i++) {
        if(strcmp(names[i], key) == 0)
            return i;
    }
    return -1;
}

int main() {
    int n = 5;
    char* students[5];

    for(int i = 0; i < n; i++) {
        students[i] = new char[30];
        cin >> students[i];
    }

    sortStudents(students, n);

    cout << "Sorted Names:\n";
    for(int i = 0; i < n; i++)
        cout << students[i] << endl;

    char search[30];
    cout << "Enter name to search: ";
    cin >> search;

    int pos = findStudent(students, n, search);
    if(pos != -1)
        cout << "Found at position " << pos;
    else
        cout << "Not Found";

    for(int i = 0; i < n; i++)
        delete[] students[i];

    return 0;
}
