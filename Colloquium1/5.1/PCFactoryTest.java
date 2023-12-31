package org.example;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.jupiter.api.Test;

class PCFactoryTest {
    @Test
    void testAppleFactory() {

        PCFactory appleFactory = new ApplePCFactory();


        NotebookProduct appleNotebook = appleFactory.createNotebook();
        PCProduct appleComputer = appleFactory.createPc();


        assertNotNull(appleNotebook);
        assertNotNull(appleComputer);


        assertTrue(appleNotebook instanceof AppleNotebook);
        assertTrue(appleComputer instanceof ApplePC);
    }

    @Test
    void testXiaomiFactory() {
        PCFactory xiaomiFactory = new XiaomiPCFactory();

        NotebookProduct xiaomiNotebook = xiaomiFactory.createNotebook();
        PCProduct xiaomiComputer = xiaomiFactory.createPc();

        assertNotNull(xiaomiNotebook);
        assertNotNull(xiaomiComputer);

        assertTrue(xiaomiNotebook instanceof XiaomiNotebook);
        assertTrue(xiaomiComputer instanceof XiaomiPC);
    }

}