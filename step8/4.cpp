#include <iostream>
#include <algorithm>
#include <cmath>
int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 15)
    {
        int temp = 2;

        for (int i = 0; i < N; i++)
        {
            temp = temp + temp - 1;
        }

        int result = std::pow(temp, 2);

        std::cout << result << '\n';
    }

    return 0;
}