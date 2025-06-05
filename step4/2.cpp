#include <iostream>
#include <vector>

int main()
{
    int N, X;
    std::cin >> N >> X;

    if (N >= 1 && N <= 10000 &&
        X >= 1 && X <= 10000)
    {
        std::vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> A[i];
        }

        std::vector<int> result;
        for (const auto &a : A)
        {
            if (a < X)
                result.emplace_back(a);
        }

        for (int i = 0; i < result.size(); i++)
        {
            std::cout << result[i];
            if (i != result.size() - 1)
                std::cout << " ";
            else
                std::cout << "\n";
        }
    }

    return 0;
}