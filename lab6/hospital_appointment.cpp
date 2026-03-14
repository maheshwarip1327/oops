#include <iostream>
using namespace std;

class Appointment {
public:
    virtual void book() {
        cout << "Booking general appointment\n";
    }
};

class DoctorAppointment : public Appointment {
public:
    void book() {
        cout << "Doctor appointment booked\n";
    }
};

class LabTest : public Appointment {
public:
    void book() {
        cout << "Lab test appointment booked\n";
    }
};

int main() {
    Appointment *a;

    DoctorAppointment d;
    LabTest l;

    a = &d;
    a->book();

    a = &l;
    a->book();

    return 0;
}