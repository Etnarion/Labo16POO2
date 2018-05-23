//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_CONTROLLER_H
#define POO2_LABO16_CONTROLLER_H

class Person;
class Bank;
class Boat;
#include <list>


class Controller {
private:
    int turn;
    std::list<Person*> persons;

    // containers
    Bank* leftBank;
    Bank* rightBank;
    Boat* boat;

    // menu constants
    enum MenuOption {
        PRINT = 'p',
        EMBARK = 'e',
        LAND = 'd',
        MOVE = 'm',
        RESET = 'r',
        QUIT = 'q',
        MENU = 'h'
    };

public:
    Controller();
    void showMenu() const;
    void executeCommand();
    void display();
    void nextTurn();
    void addPerson(Person* person);
};


#endif //POO2_LABO16_CONTROLLER_H