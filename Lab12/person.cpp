//
// Created by shawn on 11/21/20.
//

#include "person.h"
#include <utility>
#include <iostream>

using namespace std;
person::person(string ln, string fn, int num) {
    lastName = std::move(ln);
    firstName = std::move(fn);
    ID = num;
}

person::person():person("", "", -1) {

}

ostream& operator<<(ostream& os, const person& p) {
    os << p.firstName + " " + p.lastName << " " << p.ID << endl;
    return os;
}

bool person::operator<(person p) {
    string s1 = firstName;
    string s2 = p.firstName;
    return s1.compare(s2) < 0;
}

bool person::operator>(person p) {
    return firstName + " " +lastName < p.firstName + " " +p.lastName;
}

bool person::operator==(person p) {
    return firstName + lastName + to_string(ID) == p.firstName + p.lastName + to_string(ID);
}
