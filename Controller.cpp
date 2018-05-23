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
                std::string nameToEmbark = input.substr(2, input.length());
                Person *person = boat->findPersonByName(nameToEmbark);
                if (person != nullptr)
                    boat->embark(person);
                else
                    std::cout << "No person by that name" << std::endl;
                break;
            }
            case LAND: {
                std::string nameToLand = input.substr(2, input.length());
                break;
            }
            case MOVE: {
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
    const std::string SIDE = "--------------------------------------------------------------";
    std::string people = bank.getName() + ": ";
    for (Person* person : bank.getPersons()) {
        people += person->getName() + " ";
    }
    std::cout << SIDE << std::endl << people << std::endl << SIDE << std::endl;
}

void Controller::displayBoat(const Boat& boat) {
    const std::string RIVER = "==============================================================";
    std::string people = boat.getName() + ": < ";
    for (Person* person : boat.getPersons()) {
        people += person->getName() + " ";
    }
    people += " >";
    if (boat.getCurrentBank() == leftBank)
        std::cout << people << std::endl;
    std::cout << RIVER << std::endl;
    if (boat.getCurrentBank() == rightBank)
        std::cout << people << std::endl;
}