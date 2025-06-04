#include <iostream>
#include <vector>
#include <utility>

int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 100)
    {
        for (int i = N; i >= 1; i--)
        {
            for (int j = 1; j <= N; j++)
            {
                if (j < i)
                    std::cout << " ";
                else
                    std::cout << "*";
            }
            std::cout << "\n";
        }
    }

    return 0;
}