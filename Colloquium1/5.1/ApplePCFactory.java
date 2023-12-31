package org.example;

public class ApplePCFactory implements PCFactory {

    @Override
    public NotebookProduct createNotebook() {
        return new AppleNotebook();
    }
    @Override
    public PCProduct createPc() {
        return new ApplePC();
    }
}
