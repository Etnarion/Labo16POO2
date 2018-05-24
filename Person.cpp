//
// Created by Shon on 03/05/18.
//

#include "Person.h"
#include "Role.h"

Person::Person(std::string name, const Role& role) {
    _name = name;
    addRole(role);
}

bool Person::canDrive() {
    for (auto r : roles) {
        if(r.driver()) {
            return true;
        }
    }
    return false;
}

bool Person::hasRole(const Role& role) const {
    for (auto r : roles) {
        if(r == role) {
            return true;
        }
    }
    return false;
}

const std::string& Person::getName() const {
    return _name;
}

void Person::addRole(const Role& role) {
    roles.push_front(role);
}