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

    Boat(const std::string& name);
    /**
     * Boat constructor which sets its name and its current bank
     * @param name Boat name
     * @param bank Current bank
     */
    Boat(const std::string& name, Bank* bank);

    /**
     * Embarks a person on the boat
     * @param person Person to embark
     */
    void embark(Person* person);

    /**
     * Disembarks a person of the boat
     * @param person Person to disembark
     */
    void disembark(Person* person);

    /**
     * Returns the current bank on which the boat is
     * @return Current bank
     */
    Bank* getCurrentBank() const;

    /**
     * Checks wether the boat is full or not
     * @return True if full
     */
    bool isFull() const;

    /**
     * Sets current bank to given bank
     * @param bank Bank to change to
     */
    void changeBank(Bank* bank);

    /**
     * Display current situation
     */
    void displayBoat() const;
};


#endif //POO2_LABO16_BOAT_H