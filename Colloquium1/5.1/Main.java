package org.example;

public class Main {
    public static void main(String[] args) {
        PCFactory appleFactory = new ApplePCFactory();
        NotebookProduct appleNotebook = appleFactory.createNotebook();
        PCProduct applePC = appleFactory.createPc();

        appleNotebook.displayInfo();
        applePC.displayInfo();

        PCFactory xiaomiFactory = new XiaomiPCFactory();
        NotebookProduct xiaomiNotebook = xiaomiFactory.createNotebook();
        PCProduct xiaomiPC = xiaomiFactory.createPc();

        xiaomiNotebook.displayInfo();
        xiaomiPC.displayInfo();


    }

}