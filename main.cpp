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

int main() {
    // Tests
    testPerson();
    Controller controller = Controller();
    controller.addPerson(new Person("mere", Role::MOTHER));
    controller.showMenu();
    controller.executeCommand();
    return EXIT_SUCCESS;
}