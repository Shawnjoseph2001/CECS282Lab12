//
// Created by shawn on 11/21/20.
//

#ifndef LAB12_PERSON_H
#define LAB12_PERSON_H

#include <string>
using namespace std;
class person {
public:
    person(string ln, string fn, int num);
    person();
private:
    string lastName;
    string firstName;
    int ID;
};


#endif //LAB12_PERSON_H
