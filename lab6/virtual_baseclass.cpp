#include <iostream>
using namespace std;

class Device {
public:
    void power() {
        cout << "Device Power On\n";
    }
};

class Computer : virtual public Device {};
class Phone : virtual public Device {};

class SmartDevice : public Computer, public Phone {};

int main() {
    SmartDevice s;
    s.power();
    return 0;
}