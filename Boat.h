//
// Created by Shon on 23.05.18.
//

#ifndef POO2_LABO16_BOAT_H
#define POO2_LABO16_BOAT_H

#include "Container.h"
#include "Bank.h"

class Boat : public Container {
private:
    Bank* currentBank;
public:
    /**
     * Constructor
     * @param name the name of the boat
     */
    Boat(const std::string& name);
    void embark(Person* person);
    void disembark(Person* person);
};


#endif //POO2_LABO16_BOAT_H