#include <iostream>
#include <string>
#include <list>

#include "developers.h"

using namespace std;

int main() {
    cout << "Hello, QBT World!" << endl;
    developers *d = new developers();
    const list<string>& dlist = d->getDevelopers();

    for (list<string>::const_iterator iterator = dlist.begin(); iterator != dlist.end(); ++iterator) {
        cout << "Hello, " << *iterator << endl;
    }

    return 0;
}

