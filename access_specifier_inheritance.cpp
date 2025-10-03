#include<iostream>
using namespace std;

class Animal {
    protected:
    int age;
public:
    Animal() : age(5) {}
};

class Dog : public Animal {
public:
    void displayAge() {
        cout << "Dog's age: " << age << " years" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.displayAge();
    return 0;
}
