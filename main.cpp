#include <iostream>

int main()
{
    const int b = 5, c = 5;
    int a = 15, year = 2000;
    bool t  = false;
    if (a >= 10 && a <= 20)
    {
        std::cout << "true \n";
    }
    else
    {
        std::cout << "false \n";
    }
     for (size_t i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            std::cout << "sloznoe \n";
            t = true;
            break;
        }
    }
    if (!t)
    {
        std::cout << "prostoe \n";
    }
    if (b == 10 || c == 10 || b + c == 10)
    {
        std::cout << "true \n";
    }
    if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
    {
        std::cout << "leap year \n";
    }
    else
    {
        std::cout << "not a leap year \n";
    }
    return 0;
}