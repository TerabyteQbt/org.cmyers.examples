package org.cmyers.examples.lib;

import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;

public class MyLibraryTest {
    private MyLibrary ml;

    @Before
    public void setUp() {
        ml = new MyLibrary();
        Assert.assertEquals(2, ml.Developers.values().length);
    }

    @Test
    public void testMyLibrary() {
        // TODO
    }
}


