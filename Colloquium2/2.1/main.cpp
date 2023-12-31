#include"Factorial.h"

int main()
{
    std::cout << "This class calculates first n factorials" << std::endl;
    int n; 
    bool correctData = false;
    do
    {
        std::cout << "Input n"<<std::endl;
        std::cin >> n;
        if (n > 0)
        {
            correctData = true;
        }
    } while (!correctData);
    Factorial factorial;
    factorial.setN(n);
    factorial.calculateFactorials();
    factorial.printFactorials();
    
}