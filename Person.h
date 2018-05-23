//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_PERSON_H
#define POO2_LABO16_PERSON_H

class Role;

#include <string>
#include <list>

enum Gender {FEMALE, MALE};

class Person {
private:
    const std::list<Role> roles;
    std::string _name;
public:
    Person(std::string name, Role* role);

    void addRole(Role* role) {

    }

    /**
     * Checks if the person can drive
     * @return true if the person can drive
     */
    bool canDrive() const;
    /**
     * Defines if the person is a holder of the role
     * @param role role to check
     * @return true if the person is a holder of the role
     */
    bool hasRole(Role role) const;

    const std::string getName() const;
};




#endif //POO2_LABO16_PERSON_H