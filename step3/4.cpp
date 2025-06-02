#include <iostream>
#include <map>

int main()
{
    int X, N;
    int result = 0;
    std::map<int, int> receipt;

    std::cin >> X >> N;
    if (X >= 1 && X <= 1000000000 &&
        N >= 1 && N <= 100)
    {
        for (int i = 0; i < N; i++)
        {
            int price, count;
            std::cin >> price >> count;
            if (price >= 1 && price <= 1000000 && count >= 1 && count <= 10)
            {
                receipt[price] += count;
            }
        }
    }

    for (const auto &[price, count] : receipt)
    {
        result += price * count;
    }

    if (result == X)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}