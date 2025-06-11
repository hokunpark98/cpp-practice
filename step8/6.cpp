#include <iostream>

int main()
{
    int X;
    std::cin >> X;

    if (X >= 1 && X <= 10'000'000)
    {
        // 짝수: 작은거 큰거, 홀수 큰거 - 작은거
        int temp = X, i = 1;

        while (temp > i)
        {
            temp = temp - i;
            i++;
        }

        std::string A, B;
        if (i % 2 == 1)
        {

            A = std::to_string(i + 1 - temp);
            B = std::to_string(temp);
        }
        else
        {
            A = std::to_string(temp);
            B = std::to_string(i + 1 - temp);            
        }

        std::cout << A << '/' << B << '\n';
    }

    return 0;
}