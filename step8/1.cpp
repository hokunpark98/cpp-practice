#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <utility>

bool checkNCondition(const std::string &N);
std::pair<bool, int> changeTo10(int B, const std::string &N);

int main()
{
    int B;
    std::string N;

    std::cin >> N >> B;

    if (B >= 2 && B <= 36 && checkNCondition(N))
    {
        auto [is_valid, result] = changeTo10(B, N);
        if (is_valid)
        {
            std::cout << result << '\n';
        }
    }

    return 0;
}

bool checkNCondition(const std::string &N)
{
    for (const char c : N)
    {
        if (std::isdigit(c) || std::isupper(c))
            continue;
        else
            return false;
    }
    return true;
}

std::pair<bool, int> changeTo10(int B, const std::string &N)
{
    int result = 0;
    for (int i = N.size()-1; i >=0 ; i--)
    {
        if (std::isdigit(N[i]))
        {
            int temp = N[i] - '0';
            result += temp * std::pow(B, N.size() - 1 - i);
        }
        else
        {
            int temp = N[i] - 'A' + 10;
            result += temp * std::pow(B, N.size() - 1 - i);
        }

        if (result > 1000000000)
        {
            return std::make_pair(false, 0);
        }
    }
    return std::make_pair(true, result);
}
