package org.example;

public class XiaomiPCFactory implements PCFactory {

    @Override
    public NotebookProduct createNotebook() {
        return new XiaomiNotebook();
    }

    @Override
    public PCProduct createPc() {
        return new XiaomiPC();
    }
}
