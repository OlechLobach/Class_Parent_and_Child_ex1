#include "aspirant.h"

Aspirant::Aspirant(string n, int a, string topic) : Student(n, a), thesisTopic(topic) {}

string Aspirant::getThesisTopic() const {
    return thesisTopic;
}