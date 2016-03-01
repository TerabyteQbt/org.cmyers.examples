#include <iostream>

#include "foo.h"
using namespace std;

int main() {
    cout << "Developers:" << endl;
    Foo foo;
    vector<string> devs = foo.developers();
    for (vector<string>::iterator it = devs.begin(); it != devs.end(); ++it) {
        cout << "\t" << *it << endl;
    }
    return(0);
}


