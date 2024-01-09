#include "student.h"

Student::Student(string n, int a) : name(n), age(a) {}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}