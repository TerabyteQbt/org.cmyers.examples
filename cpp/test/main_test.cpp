#include <gtest/gtest.h>
#include <list>
#include <string>

#include "developers.h"

using namespace std;

TEST(Developers, DeveloperListIsUpToDate) {
    developers *d = new developers();
    const list<string> & dlist = d->getDevelopers();

    EXPECT_EQ((long unsigned int)2, dlist.size()) << "The developer list should contain two devs";
    list<string>::const_iterator iter = dlist.begin();
    EXPECT_EQ("amling", *iter) << "The first developer is amling";
    ++iter;
    EXPECT_EQ("cmyers", *iter) << "The second developer is cmyers";
}

int main(int ac, char *av[]) {
    testing::InitGoogleTest(&ac, av);
    return RUN_ALL_TESTS();
}

