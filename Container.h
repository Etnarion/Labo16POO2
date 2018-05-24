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

protected:
    std::string name;
    std::list<Person*> persons;
public:
    /**
     * Container constructor which sets its name
     * @param name
     */
    Container(const std::string& name);

    /**
     * Checks if container contains a given role
     * @param role Role to check
     * @return True if its present
     */
    bool containsRole(const Role& role) const;

    /**
     * Look for a person name in the list of persons et returns the person
     * @param name Person name
     * @return Person with the name
     */
    Person* findPersonByName(std::string name);

    /**
     * Returns the name of the container
     * @return Name of the container
     */
    const std::string getName() const;

    /**
     * Adds a person on the container
     * @param person Person to add
     */
    void addPerson(Person* person);

    /**
     * Displays each persons in the console
     */
    void displayPersons() const;
};



#endif //POO2_LABO16_CONTAINER_H