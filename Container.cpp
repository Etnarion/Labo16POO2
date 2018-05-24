//
// Created by Shon on 03/05/18.
//
#include <iostream>
#include "Container.h"
#include "Person.h"

Container::Container(const std::string& name) : name(name) {}

bool Container::containsRole(const Role& role) const {
    for(auto person : persons) {
        if(person->hasRole(role)) {
            return true;
        }
    }
    return false;
}

Person* Container::findPersonByName(std::string name) {
    for (Person* person : persons) {
        if (person->getName().compare(name) == 0)
            return person;
    }
}

const std::string Container::getName() const {
    return name;
}

void Container::displayPersons() const {
    for (Person* person : persons) {
        std::cout << person->getName() << " ";
    }
}

bool Container::canContainPerson(const Person& person) const {
    for (Person* p : persons) {
        if(p->cannotStayWith(person, *this)) {
            return false;
        }
    }
    return true;
}

