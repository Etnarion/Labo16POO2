//
// Created by Shon on 03/05/18.
//
#include "Container.h"
#include "Person.h"

Container::Container(const std::string& name) : name(name) {}

bool Container::containsRole(const Role& role) const {
    return false;
}

Person* Container::findPersonByName(std::string name) {
    for (Person* person : persons) {
        if (person->getName().compare(name))
            return person;
    }
}

const std::string Container::getName() const {
    return name;
}

const std::list<Person*> Container::getPersons() const {
    return persons;
}

void Container::addPerson(Person* person) {
    persons.push_back(person);
}