#include <iostream>

int main()
{
    int hour, minuate;
    int temp;

    std::cin >> hour >> minuate;

    temp = minuate - 45;

    if (temp < 0)
    {
        if (hour - 1 < 0)
        {
            std::cout << 24 + hour -1 << " " << 60 + temp << std::endl;
        }
        else
        {
            std::cout << hour-1 << " " << 60 + temp << std::endl;
        }
    }
    else
    {
        std::cout << hour << " " << temp << std::endl;
    }

    return 0;
}