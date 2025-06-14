#include <iostream>
#include <vector>
#include <tuple>

bool checkCondition(std::tuple<int, int, int> &input);
bool checkValid(int A, int B, int C);
void checkType(std::tuple<int, int, int> &input);

int main()
{
    std::vector<std::tuple<int, int, int>> inputs;

    while (true)
    {
        int A, B, C;
        std::cin >> A >> B >> C;
        if (A > 0 && A <= 1000 && B > 0 && B <= 1000 && C > 0 && C <= 1000)
        {
            inputs.emplace_back(A, B, C);
        }
        else if (A == 0 && B == 0 && C == 0)
            break;
        else
            return 0;
    }

    for (auto input : inputs)
    {
        if (checkCondition(input))
        {
            checkType(input);
        }
        else
        {
            std::cout << "Invalid\n";
        }
    }

    return 0;
}

bool checkCondition(std::tuple<int, int, int> &input)
{

    auto [A, B, C] = input;
    if (A >= B)
    {
        if (A >= C)
        {
            return checkValid(A, B, C);
        }
        else
        {
            return checkValid(C, B, A);
        }
    }
    else
    {
        if (B >= C)
        {
            return checkValid(B, A, C);
        }
        else
        {
            return checkValid(C, A, B);
        }
    }
}

bool checkValid(int A, int B, int C)
{
    if (B + C > A)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void checkType(std::tuple<int, int, int> &input)
{
    auto [A, B, C] = input;

    if (A == B && A == C && B == C)
    {
        std::cout << "Equilateral\n";
    }
    else if ((A == B) || (B == C) || (A == C))
    {
        std::cout << "Isosceles\n";
    }
    else
    {
        std::cout << "Scalene\n";
    }
}