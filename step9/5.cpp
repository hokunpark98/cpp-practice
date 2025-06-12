#include <iostream>
#include <vector>
#include <string>

bool isPrime(int n);

int main()
{
    int M, N;
    std::cin >> M >> N;
    if (N > 0 && N <= 10'000 && M > 0 && M <= 10'000 && M <= N)
    {
        std::vector<int> primeNumbers;
        int sum = 0;
        int min = -1;
        for (int i = M; i <= N; i++)
        {
            if (isPrime(i))
            {
                sum += i;
                if (min == -1)
                {
                    min = i;
                }
            }
        }

        if (min != -1)
        {
            std::cout << sum << '\n'
                      << min << '\n';
        }
        else
        {
            std::cout << "-1\n";
        }
    }

    return 0;
}

bool isPrime(int n)
{
    int max = n / 2;
    if (n == 1)
    {
        return false;
    }

    for (int i = 2; i <= max; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
