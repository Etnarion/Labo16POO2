//
// Created by Shon on 03/05/18.
//

#include "Role.h"
#include "Container.h"

const Role Role::POLICEMAN("policier", true, {}),
        Role::THIEF("voleur", false, {}),
        Role::MOTHER("mere",true, {{Role::THIEF, Role::POLICEMAN}, {Role::THIEF, Role::POLICEMAN}}),
        Role::FATHER("pere", true, {{Role::THIEF, Role::POLICEMAN}, {Role::THIEF, Role::POLICEMAN}}),
        Role::BOY("garcon", false, {{Role::THIEF, Role::POLICEMAN}, {Role::MOTHER, Role::FATHER}}),
        Role::GIRL("fille", false, {{Role::THIEF, Role::POLICEMAN}, {Role::FATHER, Role::MOTHER}});

std::string Role::name() {
    return _name;
}

bool Role::driver() {
    return canDrive;
}

Role::Role(const std::string& name,
           bool canDrive,
           std::initializer_list<std::pair<Role, Role>> cantStayWith) : _name(name),
                                                                        canDrive(canDrive),
                                                                        cantStayWith(cantStayWith) {}

bool operator==(const Role& left, const Role& right) {
    return left._name == right._name;
}

bool Role::cannotStayWith(const Role& role, const Container& container) const {
    for (auto r : cantStayWith) {
        if(!container.containsRole(r.second) && (container.containsRole(r.first))) {
            return true;
        }
    }

    // would be probably better not to run this list, but to define cantStayWith list for a thief and a policeman
    for (auto r : role.cantStayWith) {
        if(!container.containsRole(r.second) && (container.containsRole(r.first))) {
            return true;
        }
    }
    return false;
}