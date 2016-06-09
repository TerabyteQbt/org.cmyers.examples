package org.cmyers.examples.lib;

import org.junit.Assert;
import org.junit.Test;

public class MyLibraryTest {

    @Test
    public void testMyLibraryStatics() {
        Assert.assertEquals(2, MyLibrary.Developers.values().length);
        Assert.assertEquals("amling", MyLibrary.Developers.AMLING.name);
        Assert.assertEquals("cmyers", MyLibrary.Developers.CMYERS.name);
    }
}


