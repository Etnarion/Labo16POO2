//
// Created by Shon on 03/05/18.
//

#include <sstream>
#include <iostream>

#include "Controller.h"
#include "Person.h"
#include "Bank.h"
#include "Boat.h"

Controller::Controller() {
    leftBank = new Bank("Gauche");
    rightBank = new Bank("Droite");
    boat = new Boat("Bateau", leftBank);
}

void Controller::showMenu() const {
    std::cout << (char)PRINT << "      : afficher" << std::endl;
    std::cout << (char)EMBARK << " <nom>: embarquer <nom>" << std::endl;
    std::cout << (char)LAND << " <nom>: debarquer <nom>" << std::endl;
    std::cout << (char)MOVE << "      : deplacer bateau" << std::endl;
    std::cout << (char)RESET << "      : reinitialiser" << std::endl;
    std::cout << (char)QUIT << "      : quitter" << std::endl;
    std::cout << (char)MENU << "      : menu" << std::endl;

}

void Controller::executeCommand() {
    bool done = false;
    while (!done) {
        std::string input;

        std::cin >> input;
        switch (input[0]) {
            case PRINT: {
                display();
                break;
            }
            case EMBARK: {
                std::string personToEmbark;
                std::cin >> personToEmbark;
                Person *person = boat->getCurrentBank()->findPersonByName(personToEmbark);
                if (person != nullptr && !boat->isFull() && boat->canContainPerson(*person)) {
                    boat->embark(person);
                    boat->getCurrentBank()->removePerson(person);
                }
                else
                    std::cout << "No person by that name" << std::endl;
                break;
            }
            case LAND: {
                std::string personToLand;
                std::cin >> personToLand;
                Person *person = boat->findPersonByName(personToLand);
                if (person != nullptr && boat->getCurrentBank()->canContainPerson(*person)) {
                    boat->disembark(person);
                }
                else
                    std::cout << "No person by that name" << std::endl;
                break;
            }
            case MOVE: {
                if (boat->getCurrentBank() == leftBank)
                    boat->changeBank(rightBank);
                else
                    boat->changeBank(leftBank);
                break;
            }
            case RESET: {
                break;
            }
            case QUIT: {
                done = true;
                break;
            }
            case MENU: {
                break;
            }
            default: {
                break;
            }
        }

        display();
    }
}

void Controller::display() {
    //Display left bank
    displayBank(*leftBank);

    //Display boat
    displayBoat(*boat);

    //Display right bank
    displayBank(*rightBank);
}

void Controller::nextTurn() {

}

void Controller::addPerson(Person* person) {
    leftBank->addPerson(person);
    persons.push_back(person);
}

void Controller::displayBank(const Bank& bank) {
    bank.displayBank();
}

void Controller::displayBoat(const Boat& boat) {
    const std::string RIVER = "==============================================================";
    if (boat.getCurrentBank() == leftBank) {
        boat.displayBoat();
    } else
        std::cout << std::endl;
    std::cout << RIVER << std::endl;
    if (boat.getCurrentBank() == rightBank) {
        boat.displayBoat();
    } else
        std::cout << std::endl;
}