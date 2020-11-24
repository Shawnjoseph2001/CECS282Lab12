#include <iostream>
#include <set>
#include "person.h"
#include <string>
#include "comparePersons.h"

using namespace std;
int main() {
    multiset<person *, comparePersons> ms = multiset<person*, comparePersons>();

    person* ptrP1 = new person("KuangThu", "Bruce", 4157300);

    person* ptrP2 = new person("Deauville", "William", 8435150);

    person* ptrP3 = new person("Wellington", "John", 9207404);

    person* ptrP4 = new person("Bartoski", "Peter", 6946473);

    person* ptrP5 = new person("Fredericks", "Roger", 7049982);

    person* ptrP6 = new person("McDonald", "Stacey", 7764987);

    person* ptrP7 = new person("KuangThu", "Bruce", 4157300);

    person* ptrP8 = new person("Deauville", "William", 8435150);
    ms.insert(ptrP1);
    ms.insert(ptrP2);
    ms.insert(ptrP3);
    ms.insert(ptrP4);
    ms.insert(ptrP5);
    ms.insert(ptrP6);
    ms.insert(ptrP7);
    ms.insert(ptrP8);
    for(auto i = ms.begin(); i != ms.end(); i++) {
        person * p = *i;
        cout << *p;
    }
    string searchLastName, searchFirstName;
    cout << "Enter the person's first name:";
    cin >> searchFirstName;
    cout << "Enter the person's last name:";
    cin >> searchLastName;
    person searchPerson(searchLastName, searchFirstName, 0);
    person* sPerson= &searchPerson;
    // get count of such persons
    int cntPersons = ms.count(sPerson);
    cout << "This person appeared " << cntPersons << " times.";
}
