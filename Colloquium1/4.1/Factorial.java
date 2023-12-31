package org.example;

import java.util.ArrayList;
import java.util.List;

public class Factorial {
    private  int n;
    private final List<Long> answers = new ArrayList<>();

    public List<Long> getAnswers() {
        return answers;
    }

    public void setN(int n) {
        this.n =n;
    }



    public void calculateFactorials()  throws Exception{

            long temp = 1;
            answers.add(temp);
            for (int i = 2; i <= n; i++) {
                temp *= i;
                if(temp < 0)
                {
                    throw new Exception("out of long");
                }
                else{
                    answers.add(temp);
                }
            }
    }

    public void printAnswers(){
        for(long answer: answers) {
            System.out.print(answer+" ");
        }
    }



}
