#include <iostream>
#include <vector>

int main()
{
    std::vector<std::pair<int, int>> pairs;

    while (true)
    {
        int A, B;
        std::cin >> A >> B;
        if (A > 0 && A <= 10000 && B >= 0 && B <= 10000 && A != B)
        {
            pairs.emplace_back(A, B);
        }
        else if (A == 0 && B == 0)
        {
            break;
        }
        else
        {
            return 0;
        }
    }

    for (size_t i = 0; i < pairs.size(); i++)
    {
        int A = pairs[i].first;
        int B = pairs[i].second;

        if (A > B && A % B == 0)
        {
            std::cout << "multiple\n";
        }
        else if (A < B && B % A == 0)
        {
            std::cout << "factor\n";
        }
        else
        {
            std::cout << "neither\n";
        }
    }

    return 0;
}