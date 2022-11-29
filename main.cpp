#include <iostream>

int faktoriyel(int sayi)
{
    if(sayi < 2)
    {
        return 1;
    }
    return  sayi * faktoriyel(sayi-1);
}

int permutasyon (int sayi1, int sayi2)
{

    return faktoriyel(sayi1) / (faktoriyel(sayi1-sayi2));
}

int kombinasyon (int sayi1, int sayi2)
{

    return permutasyon(sayi1,sayi2) / faktoriyel(sayi2);
}

int main()
{
int sayi1;
int sayi2;
int control;
std::cout << "Fonksiyon = 1 | Permutasyon = 2 | Kombinasyon = 3" << "\n" << ": ";
std::cout <<"sayi1: ";
std::cin >> control;

switch (control)
{
    case 1:
        std::cout << "sayi girin \n" << ": ";
        std::cin >> sayi1; 
        std::cout <<sayi1 << "! = " << faktoriyel(sayi1) << "\n";
        break;
    
    case 2:
    std::cout << "1.sayiyi girin \n" << ": ";
    std::cin >> sayi1; 
    std::cout << "2.sayiyi girin \n" << ": ";
    std::cin >> sayi2;
    std::cout << "P(" << sayi2 << ") = " << permutasyon(sayi1,sayi2) << "\n"; 
        break;

    case 3:
    std::cout << "1.sayiyi girin \n" << ": ";
    std::cin >> sayi1; 
    std::cout << "2.sayiyi girin \n" << ": ";
    std::cin >> sayi2;
    std::cout << "C(" << sayi2 << ") = " << kombinasyon(sayi1,sayi2) << "\n"; 
    break;


    default:
    break;
}

    return 0;
}