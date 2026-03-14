#include <iostream>
using namespace std;

class Transport {
public:
    virtual void travel() {
        cout << "Travelling...\n";
    }
};

class Bus : public Transport {
public:
    void travel() {
        cout << "Travelling by Bus\n";
    }
};

class Train : public Transport {
public:
    void travel() {
        cout << "Travelling by Train\n";
    }
};

class Flight : public Transport {
public:
    void travel() {
        cout << "Travelling by Flight\n";
    }
};

int main() {
    Transport *t;

    Bus b;
    Train tr;
    Flight f;

    t = &b;
    t->travel();

    t = &tr;
    t->travel();

    t = &f;
    t->travel();

    return 0;
}