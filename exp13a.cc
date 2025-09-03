//overloading (polymorphism)
//exp13a 

#include <iostream>
using namespace std;

class Add {
public:
   
    Add(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    Add(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }

    Add(int a, int b, int c) {
        cout << "Sum of three integers: " << a + b + c << endl;
    }
};

int main() {
    int x, y, z;

    cout << "Enter two integers:\n";
    cin >> x >> y;
    Add obj1(x, y);   

    cout << "\nEnter two float numbers:\n";
    float p, q;
    cin >> p >> q;
    Add obj2(p, q);   

    cout << "\nEnter three integers:\n";
    cin >> x >> y >> z;
    Add obj3(x, y, z); 

    return 0;
}
