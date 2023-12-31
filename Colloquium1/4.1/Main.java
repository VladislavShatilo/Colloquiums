package org.example;

import java.util.Scanner;

public class Main {


    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner(System.in);
        int n;
        boolean correctData = false;
        do
        {
            System.out.println("Input n");
            n= scan.nextInt();
            if(n>0)
            {
                correctData = true;
            }
        }while (!correctData);

        Factorial factorial = new Factorial();
        factorial.setN(n);
        factorial.calculateFactorials();
        factorial.printAnswers();
    }
}