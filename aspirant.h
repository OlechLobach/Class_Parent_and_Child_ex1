#ifndef ASPIRANT_H
#define ASPIRANT_H

#include "student.h"

class Aspirant : public Student {
private:
    string thesisTopic;

public:
    Aspirant(string n = "Unknown", int a = 0, string topic = "Unknown");

    string getThesisTopic() const;
};

#endif
