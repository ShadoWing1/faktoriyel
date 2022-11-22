#include <iostream>

int faktoriyel(int sayi)
{
    if(sayi < 3)
    {
        return 2;
    }
    return  sayi * faktoriyel(sayi-1);
}

int permutasyon (int sayi1, int sayi2)
{

    return faktoriyel(sayi1) / faktoriyel(sayi1-sayi2);
}

int kombinasyon (int sayi1, int sayi2)
{

    return (faktoriyel(sayi1) / faktoriyel(sayi1-sayi2)) / faktoriyel(sayi2);
}

int main()
{
    std::cout << faktoriyel(5) << "\n";
    std::cout << permutasyon(6,3) << "\n";
    std::cout << kombinasyon(5,3) << "\n";
    return 0;
}
