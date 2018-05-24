//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTAINER_H
#define POO2_LABO16_CONTAINER_H

class Person;
class Role;

#include <string>
#include <list>

class Container {
private:
    std::string name;
protected:
    std::list<Person*> persons;
public:
    /**
     * Constructor
     * @param name the name of the container
     */
    Container(const std::string& name);

    /**
     * Checks if the container contains a person that holds the role
     * @param role the role in question
     * @return true if the container contains a person who holds the role
     */
    bool containsRole(const Role& role) const;

    /**
     * Finds a person with the specified name
     * @param name the name of the person to find
     * @return the person found
     */
    // TODO what if the person is not found?
    Person* findPersonByName(std::string name);
};



#endif //POO2_LABO16_CONTAINER_H