#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    if (N > 1 && N <= 10'000'000)
    {
        int i = 2;
        while (N > 1)
        {
            if (N % i == 0)
            {
                std::cout << i << '\n';
                N /= i;
            }
            else
            {
                i++;
            }
        }
    }
    else if(N == 1)
    {
        return 0;
    }
    return 0;
}