#include <iostream>
using namespace std;

class Student {
public:
    void study() {
        cout << "The student is studying." << endl;
    }
};

class Graduate : public Student {
public:
    void research() {
        cout << "The graduate is doing research." << endl;
    }
};

int main() {
    Graduate g;
    g.study();
    g.research();
    return 0;
}

/*output
The student is studying.
The graduate is doing research.*/
