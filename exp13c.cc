//function overloading 
//exp13c 

#include <iostream>
using namespace std;

class Math {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two floats
    float add(float a, float b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << "Sum of 2 ints: " << m.add(10, 20) << endl;
    cout << "Sum of 3 ints: " << m.add(5, 15, 25) << endl;
    cout << "Sum of 2 floats: " << m.add(2.5f, 3.5f) << endl;

    return 0;
}

/* 

OUTPUT 

Sum of 2 ints: 30
Sum of 3 ints: 45
Sum of 2 floats: 6

*/