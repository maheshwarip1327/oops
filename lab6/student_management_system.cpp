#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int marks;

public:
    void getStudent() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    virtual void calculateGrade() {
        if(marks >= 90) cout << "Grade: A\n";
        else if(marks >= 75) cout << "Grade: B\n";
        else if(marks >= 50) cout << "Grade: C\n";
        else cout << "Grade: F\n";
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

class UnderGrad : public Student {
public:
    void calculateGrade() {
        cout << "Undergraduate ";
        Student::calculateGrade();
    }
};

class PostGrad : public Student {
public:
    void calculateGrade() {
        cout << "Postgraduate ";
        Student::calculateGrade();
    }
};

int main() {
    UnderGrad u;
    PostGrad p;

    cout << "Undergraduate Student\n";
    u.getStudent();
    u.display();
    u.calculateGrade();

    cout << "\nPostgraduate Student\n";
    p.getStudent();
    p.display();
    p.calculateGrade();

    return 0;
}