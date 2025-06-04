#include <iostream>
#include <vector>
#include <utility>

int main()
{
    std::vector<std::pair<int, int>> pairs;

    while (true)
    {
        int A, B;
        std::cin >> A >> B;

        if (A > 0 && A < 10 &&
            B > 0 && B < 10)
        {
            pairs.emplace_back(A, B);
        }
        else if (A != 0 || B != 0)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    for (const auto &pair : pairs)
    {
        std::cout << pair.first + pair.second << '\n';
    }
    return 0;
}