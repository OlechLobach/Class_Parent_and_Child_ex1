
#include "student.h"
#include "aspirant.h"

int main() {
    Student s1("Alice", 20);
    Aspirant a1("Bob", 25, "Machine Learning");

    std::cout << "Student: " << s1.getName() << ", Age: " << s1.getAge() << std::endl;
    std::cout << "Aspirant: " << a1.getName() << ", Age: " << a1.getAge() << ", Thesis Topic: " << a1.getThesisTopic() << std::endl;

    return 0;
}