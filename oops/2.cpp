/*Write a program to implement function overloading for calculating the area of a circle, rectangle, and triangle.*/

#include <iostream>
using namespace std;

const float PI = 3.14;

class AreaCalculator{
private:
    float radius;
    float length;
    float width;
    float base;
    float height;
    
public:
    void Area(float radius){
        this -> radius = radius * radius * PI;
        cout << "Area of circle: " << this -> radius << endl;
    }

    void Area(float length, float width){
        this -> length = length;
        this -> width = width;
        float area = this -> length * this -> width;
        cout << "Area of rectangle: " << area << endl;
    }
};

int main(){
    AreaCalculator a1;
    a1.Area(3.4);
    a1.Area(12.3, 23.4);
    return 0;
}