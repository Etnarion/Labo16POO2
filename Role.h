//
// Created by Shon on 03/05/18.
//

#ifndef POO2_LABO16_ROLE_H
#define POO2_LABO16_ROLE_H

class Container;

#include <list>
#include <string>

class Role {
private:
    std::string _name;
    bool canDrive;

    // for every element of the list (l):
    // the holder of the role can not stay with tl.first in the container if l.second is not present
    std::list<std::pair<Role, Role>> cantStayWith;

    Role(const std::string& name, bool canDrive, std::initializer_list<std::pair<Role, Role>> cantStayWith);

    // Deny the copies
//    Role(const Role&) = delete;
//    Role& operator=(const Role&) = delete;

public:
    bool driver() const;
    std::string name();
    static const Role MOTHER, FATHER, BOY, GIRL, POLICEMAN, THIEF;

    /**
     * Checks if the current role holder can stay with a holder of another role in the container
     * @param role the role to check
     * @param container the container where the role holders stay
     * @return true if the holder of the current role can NOT stay with another one
     */
    bool cannotStayWith(const Role& role, const Container& container) const;

    /**
     * Checks if the roles are equal
     * @param left the first role
     * @param right the second role
     * @return true if the roles are equal
     */
    friend bool operator==(const Role& left, const Role& right);
};


#endif //POO2_LABO16_ROLE_H