//
// Created by Shon on 03/05/18.
//
#include "Container.h"
#include "Person.h"

Container::Container(const std::string& name) : name(name) {}

bool Container::containsRole(const Role& role) const {
    for(auto person : persons) {
        if(person.hasRole(role)) {
            return true;
        }
    }
    return false;
}

Person* Container::findPersonByName(std::string name) {
    for (Person* person : persons) {
        if (person->getName().compare(name))
            return person;
    }
}
