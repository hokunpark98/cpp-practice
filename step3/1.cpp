#include <iostream>

int main()
{
    int N;

    std::cin >> N;

    if (N >= 1 && N <= 9)
    {
        for (int i = 1; i <= 9; i++)
        {
            std::cout << N << " * " << i << " = " << N*i << std::endl;
        }
    }

    return 0;
}
