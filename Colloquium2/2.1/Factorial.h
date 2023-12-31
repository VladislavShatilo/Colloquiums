#pragma once
#include<iostream>
#include<vector>
class Factorial
{
private:
    int n;
    std::vector<long long > answers;
public:
    void setN(int n_t)
    {
        this->n = n_t;
    }
    int getN()
    {
        return n;
    }
    std::vector<long long > getAnswers()
    {
        return answers;
    }
    void calculateFactorials()
    {
        try {
            long long temp = 1;

            for (int i = 1; i <= n; i++)
            {

                temp *= i;
                if (temp <= 0)
                {
                    throw 0;
                }
                answers.push_back(temp);
            }
        }
        catch (int error)
        {
            std::cout << "\nout of long long\n";
        }
    }
    void printFactorials()
    {
        for (int i = 0; i < answers.size(); i++)
        {
         
            std::cout << answers[i] << " ";
        }

    }
};
