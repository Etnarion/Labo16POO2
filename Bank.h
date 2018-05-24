//
// Created by Shon on 23.05.18.
//

#ifndef POO2_LABO16_BANK_H
#define POO2_LABO16_BANK_H

#include "Container.h"

class Bank : public Container {
private:
public:
    /**
     * Basic constructor. Sets bank name
     * @param name Bank name
     */
    Bank(const std::string& name);

    /**
     * Adds a person on the bank
     * @param person Person to add
     */
    void addPerson(Person* person);

    /**
     * Remove a person from the bank
     * @param person Person to remove
     */
    void removePerson(Person* person);

    /**
     * Display current situation
     */
    void displayBank() const;
};


#endif //POO2_LABO16_BANK_H