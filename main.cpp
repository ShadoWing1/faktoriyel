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

int main(int argc, char** argv)
{
    if(argc > 1)
    {
        switch (argv[1][0])
        {
        case 'f':
            std::cout << faktoriyel(std::atoi(argv[2])) << '\n';
            break;

        case 'c':
            std::cout << kombinasyon(std::atoi(argv[2]), std::atoi(argv[3])) << '\n';
            break;

        case 'p':
            std::cout << permutasyon(std::atoi(argv[2]), std::atoi(argv[3])) << '\n';
            break;

        case 'p':
            std::cout << permutasyon(std::atoi(argv[2]), std::atoi(argv[3])) << '\n';
            break;
            
        default:
            std::cout << "Bilinmeyen komut\n";
            break;
        }
    }
    return 0;
}
