#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    if (N >= 4 && N <= 1000 && N % 4 == 0)
    {
        for (int i=1; i <= N / 4; i++)
            std::cout << "long ";
    }
    std::cout << "int" << std::endl;

    return 0;
}