#include <iostream>
#include <cmath>
using namespace std;

class shape {
public:
    virtual void area() = 0;
};

class circle : public shape {
public:
    void area() override {
        float r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class triangle : public shape {
public:
    void area() override {
        float a, b, c;
        cout << "Enter the three sides: ";
        cin >> a >> b >> c;
        float s = (a + b + c) / 2;
        cout << "Area of Triangle = " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
    }
};

class rectangle : public shape {
public:
    void area() override {
        float l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        cout << "Area of Rectangle = " << l * w << endl;
    }
};

int main() {
    int choice;
    cout<<"To find area of circle enter 1\nTo find area of rectangle enter 2\nTo find area of triangle enter 3\n";
    cin >> choice;

    if (choice == 1) {
        circle c;
        c.area();
    } 
    else if (choice == 2) {
        rectangle r;
        r.area();
    } 
    else if (choice == 3) {
        triangle t;
        t.area();
    } 
    else {
        cout << "Enter valid choice" << endl;
    }

    return 0;
}
