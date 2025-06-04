#include <iostream>
#include <vector>
#include <utility>

int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 100)
    {
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                std::cout << "*";
            }
            std::cout << "\n";
        }
    }

    return 0;
}