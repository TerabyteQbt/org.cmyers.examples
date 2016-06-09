package org.cmyers.examples.lib;

public class MyLibrary {
    public enum Developers {
        AMLING("amling"),
        CMYERS("cmyers"),
        ;

        public final String name;

        Developers(String name) {
            this.name = name;
        }
    }
}
