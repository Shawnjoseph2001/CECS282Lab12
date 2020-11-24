//
// Created by shawn on 11/21/20.
//

#include "comparePersons.h"





bool comparePersons::operator()(person *p1, person *p2) const{
    string s1 = p1->firstName + " " + p1->lastName;
    string s2 = p2->firstName + " " + p2->lastName;
    return s1.compare(s2) < 0;
}
