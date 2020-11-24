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
    friend ostream& operator<<(ostream& os, const person& p);
    string firstName;
    string lastName;
    bool operator<(person p);
    bool operator>(person p);
    bool operator==(person p);
private:
    int ID;
};

#endif //LAB12_PERSON_H
