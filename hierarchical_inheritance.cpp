#include<iostream>
#include<string>
using namespace std;

class Vegetable {
    public:
    string names[3] = {"Carrot", "Spinach", "Broccoli"};
    void producer() {
        cout << "Green Harvest Co." << endl;
    }
};

class Carrot: public Vegetable {
    public:
    string shade = "Orange";
};

class Spinach: public Vegetable {
    public:
    string shade = "Green";
};

class Broccoli: public Vegetable {
    public:
    string shade = "Dark Green";
};

int main() {
    Carrot v1;
    cout << endl;
    v1.producer();
    cout << v1.names[0] << ": " << v1.shade << endl;

    Spinach v2;
    cout << endl;
    v2.producer();
    cout << v2.names[1] << ": " << v2.shade << endl;

    Broccoli v3;
    cout << endl;
    v3.producer();
    cout << v3.names[2] << ": " << v3.shade << endl;
}
