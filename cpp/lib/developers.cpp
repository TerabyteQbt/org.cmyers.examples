#include <string>
#include <list>

#include "developers.h"

using namespace std;

developers::developers() : foo(weirdness) {
    devs.push_back("amling");
    devs.push_back("cmyers");
}

const list<string>& developers::getDevelopers() {
    return this->devs;
}

