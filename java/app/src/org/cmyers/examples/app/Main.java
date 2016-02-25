package org.cmyers.examples.app;

import org.cmyers.examples.lib.MyLibrary;

class Main {
    public static void main(String[] args) {
        System.out.println("QBT Developers: ");
        for(MyLibrary.Developers d : MyLibrary.Developers.values()) {
            System.out.println("\tDeveloper " + d + ": " + d.name);
        }
        return;
    }
}

