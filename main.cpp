#include <iostream>

#include "Controller.h"
#include "Role.h"
#include "Person.h"

int main() {
    Controller controller = Controller();
    controller.addPerson(new Person("mere", Role::MOTHER));
    controller.showMenu();
    controller.executeCommand();
    return EXIT_SUCCESS;
}