#include <iostream>

#include "Controller.h"
#include "Role.h"
#include "Person.h"
using namespace std;

void testPerson() {
    cout << "***Person class test***" << endl;
    Person mere("mere", Role::MOTHER);
    Person pere("pere", Role::FATHER);
    Person julie("julie", Role::GIRL);
    Person policier("policier", Role::POLICEMAN);
    cout << mere.canDrive() << endl;
    cout << pere.canDrive() << endl;
    cout << julie.canDrive() << endl;
    cout << policier.canDrive() << endl;
}

void testRoles() {
    Person mere("mere", Role::MOTHER);
    Person pere("pere", Role::FATHER);
    Person julie("julie", Role::GIRL);

}

int main() {
    // Tests
    //testPerson();
    Controller controller = Controller();

    Person
            mere("mere", Role::MOTHER),
            pere("pere", Role::FATHER),
            julie("julie", Role::GIRL),
            jeanne("jeanne", Role::GIRL),
            paul("paul", Role::BOY),
            pierre("pierre", Role::BOY),
            voleur("voleur", Role::THIEF),
            policier("policier", Role::POLICEMAN);



    controller.addPerson(&pere);
    controller.addPerson(&mere);
    controller.addPerson(&julie);
    controller.addPerson(&jeanne);
    controller.addPerson(&paul);
    controller.addPerson(&pierre);
    controller.addPerson(&voleur);
    controller.addPerson(&policier);
    controller.showMenu();
    controller.display();
    controller.executeCommand();
    return EXIT_SUCCESS;
}