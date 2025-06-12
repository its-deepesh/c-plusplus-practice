#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int age;
    int rollNo;
    
public: 
    void _init_(string n, int a, int r){
        name = n;
        age = a;
        rollNo = r;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main(){
    Student s1;
    int rollNo, age;
    string name;

    cout << "Enter name, age, and roll number: ";
    cin >> name >> age >> rollNo;

    s1._init_(name, age, rollNo);
    s1.display();
    return 0;
}