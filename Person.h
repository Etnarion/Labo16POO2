//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_PERSON_H
#define POO2_LABO16_PERSON_H

class Role;

#include <string>
#include <list>
#include "Container.h"

enum Gender {FEMALE, MALE};

class Person {
private:
    std::list<const Role> roles;
    std::string _name;
public:
    Person(std::string name, const Role& role);

    /**
     * Adds a new role to a person
     * @param role
     */
    // TODO check if the role is already in the list
    void addRole(const Role& role);

    /**
     * Checks if the person can drive
     * @return true if the person can drive
     */
    bool canDrive();
    /**
     * Defines if the person is a holder of the role
     * @param role role to check
     * @return true if the person is a holder of the role
     */
    bool hasRole(const Role& role) const;

    const std::string& getName() const;

    /**
     * Checks if two persons can stay in the same container
     * @param person second person
     * @param container container in question
     * @return true if two persons can NOT stay in the same container
     */
    bool cannotStayWith(const Person& person, const Container& container) const;

    friend bool operator==(const Person& left, const Person& right);
};




#endif //POO2_LABO16_PERSON_H