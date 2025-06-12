#include <iostream>
#include <vector>
#include <string>

void solveStep9Problem3(int n);

int main()
{
    std::vector<int> inputs;

    while (true)
    {
        int n;
        std::cin >> n;

        if (n >= 2 && n < 100'000)
        {
            inputs.emplace_back(n);
        }
        else if (n == -1)
        {
            break;
        }
        else
        {
            return 0;
        }
    }

    for (size_t i = 0; i < inputs.size(); i++)
    {
        solveStep9Problem3(inputs[i]);
    }

    return 0;
}

void solveStep9Problem3(int n)
{
    std::string result = "";
    std::vector<int> factors;
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            factors.emplace_back(i);
        }
    }

    for (size_t i = 0; i < factors.size(); i++)
    {
        sum += factors[i];
    }

    if (sum == n)
    {
        result += std::to_string(n) + " = ";
        for (size_t i = 0; i < factors.size(); i++)
        {
            result += std::to_string(factors[i]);
            if (i < factors.size() - 1)
                result += " + ";
        }
    }

    else
    {
        result += std::to_string(n) + " is NOT perfect."; 
    }

    std::cout << result << '\n';
}
