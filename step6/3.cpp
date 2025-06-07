#include <iostream>
#include <vector>

int main()
{
    int num;
    std::cin >> num;

    for (int i = 1; i <= 2 * num - 1; i++)
    {
        if (i <= num)
        {
            for (int j = num - i; j > 0; j--)
            {
                std::cout << ' ';
            }
            for (int k = 1; k <= 1 + 2 * (i-1); k++)
            {
                std::cout << '*';
            }
        }
        else
        {
            for (int j = 1; j <= i-num; j++)
            {
                std::cout << ' ';
            }
            for (int k = 2 * (2*num - i) -1; k >= 1; k--)
            {
                std::cout << '*';
            }
        }
        std::cout << '\n';
    }
    return 0;
}