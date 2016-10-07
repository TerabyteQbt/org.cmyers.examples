#include <string>
#include <list>

#include "weird/include.h"

using namespace std;

class developers {
    public:
        developers();
        const list<string>& getDevelopers();
        const int foo;
    private:
        list<string> devs;
};

