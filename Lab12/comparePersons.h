//
// Created by shawn on 11/21/20.
//

#ifndef LAB12_COMPAREPERSONS_H
#define LAB12_COMPAREPERSONS_H


#include "person.h"

class comparePersons {
public:
    bool operator() (person * p1, person * p2) const;
};


#endif //LAB12_COMPAREPERSONS_H
