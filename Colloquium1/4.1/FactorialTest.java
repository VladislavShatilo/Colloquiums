package org.example;

import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class FactorialTest {

    @Test
    void calculateFactorials() throws Exception {
        Factorial factorial = new Factorial();
        factorial.setN(3);
        factorial.calculateFactorials();
        List<Long> test1 = new ArrayList<>();
        test1.add(1L);
        test1.add(2L);
        test1.add(6L);
        assertEquals(factorial.getAnswers(), test1);

    }
    @Test
    void calculateFactorials1() throws Exception {
        Factorial factorial1 = new Factorial();
        factorial1.setN(6);
        factorial1.calculateFactorials();
        List<Long> test2 = new ArrayList<>();
        test2.add(1L);
        test2.add(2L);
        test2.add(6L);
        test2.add(24L);
        test2.add(120L);
        test2.add(720L);
        assertEquals(factorial1.getAnswers(), test2);
    }

    @Test
    void calculateFactorials2() throws Exception {
        Factorial factorial2 = new Factorial();
        factorial2.setN(8);
        factorial2.calculateFactorials();
        List<Long> test3 = new ArrayList<>();
        test3.add(1L);
        test3.add(2L);
        test3.add(6L);
        test3.add(24L);
        test3.add(120L);
        test3.add(720L);
        test3.add(5040L);
        test3.add(40320L);
        assertEquals(factorial2.getAnswers(), test3);
    }





}