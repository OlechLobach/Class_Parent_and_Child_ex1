
#include "student.h"
#include "aspirant.h"

int main() {
    Student s1("Alice", 20);
    Aspirant a1("Bob", 25, "Machine Learning");

    cout << "Student: " << s1.getName() << ", Age: " << s1.getAge() << endl;
    cout << "Aspirant: " << a1.getName() << ", Age: " << a1.getAge() << ", Thesis Topic: " << a1.getThesisTopic() << endl;

    return 0;
}