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

bool Person::cannotStayWith(const Person& person, const Container& container) const {
    for (auto r1 : roles) {
        for (auto r2 : person.roles) {
            if(r1.cannotStayWith(r2, container)) {
                return true;
            }
        }
    }
    return false;
}

bool operator==(const Person& left, const Person& right) {
    if(left._name != right._name) {
        return false;
    }

    int roleCount = 0;
    for (auto r : left.roles) {
        if(!right.hasRole(r)) {
            return false;
        }
        roleCount++;
    }
    if(roleCount != right.roles.size()) {
        return false;
    }
    return true;
}