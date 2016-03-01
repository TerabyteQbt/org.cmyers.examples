#include "foo.h"
using namespace std;

vector<string> Foo::developers() {
    return this->devs;
}

Foo::Foo() {
    this->devs.push_back("amling");
    this->devs.push_back("cmyers");
}


