//
// Created by Shon on 23.05.18.
//

#include <iostream>
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
        currentBank->addPerson(person);
    }
}

Bank* Boat::getCurrentBank() const {
    return currentBank;
}

bool Boat::isFull() const {
    return persons.size() >= 2;
}

void Boat::changeBank(Bank* bank) {
    currentBank = bank;
}

void Boat::displayBoat() const {
    std::cout << name << ": < ";
    displayPersons();
    std::cout << ">" << std::endl;
}