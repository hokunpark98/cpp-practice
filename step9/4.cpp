#include <iostream>
#include <vector>
#include <string>

bool isPrime(int n);

int main()
{
    int N;
    std::cin >> N;

    if (N > 0 && N <= 100)
    {
        std::vector<int> inputs;

        for (int i = 0; i < N; i++)
        {
            int A;
            std::cin >> A;
            if (A > 0 && A <= 1'000)
            {
                inputs.emplace_back(A);
            }
            else
            {
                return 0;
            }
        }

        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (isPrime(inputs[i]))
            {
                count++;
            }
        }

        std::cout << count << '\n';
    }

    return 0;
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}