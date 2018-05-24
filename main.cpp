#include <iostream>

#include "Controller.h"
#include "Role.h"
#include "Person.h"

using namespace std;

int main() {
    Controller controller = Controller();
    controller.addPerson(new Person("pere", Role::FATHER));
    controller.addPerson(new Person("mere", Role::MOTHER));
    controller.addPerson(new Person("julie", Role::GIRL));
    controller.addPerson(new Person("jeanne", Role::GIRL));
    controller.addPerson(new Person("paul", Role::BOY));
    controller.addPerson(new Person("pierre", Role::BOY));
    controller.addPerson(new Person("voleur", Role::THIEF));
    controller.addPerson(new Person("policier", Role::POLICEMAN));
    controller.showMenu();
    controller.display();
    controller.executeCommand();
    return EXIT_SUCCESS;
}