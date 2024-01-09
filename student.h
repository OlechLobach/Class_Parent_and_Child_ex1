#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string n = "Unknown", int a = 0);

    string getName() const;
    int getAge() const;
};

#endif
