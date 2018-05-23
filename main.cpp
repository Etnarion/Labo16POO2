#include <iostream>
#include "Controller.h"

int main() {
    Controller controller = Controller();
    //controller.addPerson(new Person("mere"));
    controller.showMenu();
    controller.executeCommand();
    return EXIT_SUCCESS;
}