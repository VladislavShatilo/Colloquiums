#include"Kunteynir.h"

int main()
{
    std::cout << "This class find same elements in vector\n";
    kunteynir kunteynir2;
    const std::vector<long long> v1 = { 3,4,5,6,7,8,3,4 };
    kunteynir2.set_vector(v1);
    kunteynir2.find_same();
    kunteynir2.print_vector();
  
}