//
// Created by Shon on 23.05.18.
//

#include "Boat.h"

Boat::Boat(const std::string& name, Bank* bank) : Container::Container(name) {
    currentBank = bank;
}

void Boat::embark(Person* person) {
    if (persons.size() < 2) {
        persons.push_back(person);
    }
}

void Boat::disembark(Person* person) {
    if (persons.size() > 0) {
        persons.remove(person);
    }
}

const Bank* Boat::getCurrentBank() const {
    return currentBank;
}