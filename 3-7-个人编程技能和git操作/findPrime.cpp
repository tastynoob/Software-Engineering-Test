#include <iostream>
#include <math.h>

bool judgePrime(int p)
{
    if (p == 2 || p == 3)
    {
        return true;
    }
    if (p % 6 != 1 && p % 6 != 5)
    {
        return false;
    }
    for (int i = 5; i <= floor(sqrt(p)); i += 6)
    {
        if (p % i == 0 || p % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int enter = 5;
    for (int i = 2; i < 20000;i++)
    {
        if (judgePrime(i))
        {
            std::cout << i;
            enter--;
            if (enter == 0)
            {
                enter = 5;
                std::cout << std::endl;
            }
            else
            {
                std::cout << " ";
            }
        }
    }
}