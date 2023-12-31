#pragma once
#include<iostream>
#include <algorithm>
#include<vector>
#include<string>
#include<fstream>

class kunteynir
{
private:
    std::vector<long long> main_vector_;
    std::vector<long long> result_;
public:
    void set_vector(const std::vector<long long>& vector_t)
    {
        main_vector_ = vector_t;
    }
    std::vector<long long> get_result()
    {
        return result_;
    }
    void find_same()
    {
        for (long long i : main_vector_)
        {
            if (std::find(result_.begin(), result_.end(), i) == result_.end()) {
                result_.push_back(i);
            }
        }
    }

    void print_vector() const
    {
        for (const long long i : result_)
        {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
};