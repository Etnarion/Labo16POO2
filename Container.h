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
    Container(const std::string&);
    bool containsRole(const Role& role) const;
    Person* findPersonByName(std::string name);
    const std::string getName() const;
    const std::list<Person*> getPersons() const;
    void addPerson(Person* person);
};



#endif //POO2_LABO16_CONTAINER_H