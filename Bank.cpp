//
// Created by Shon on 23.05.18.
//

#include <iostream>
#include "Bank.h"

Bank::Bank(const std::string& name) : Container::Container(name) {
}

void Bank::addPerson(Person* person) {
    persons.push_back(person);
}

void Bank::removePerson(Person* person) {
    persons.remove(person);
}

void Bank::displayBank() const {
    const std::string SIDE = "--------------------------------------------------------------";
    std::cout << SIDE << std::endl;
    std::cout << name + ": ";
    displayPersons();
    std::cout << std::endl << SIDE << std::endl;
}