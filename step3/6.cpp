#include <iostream>
#include <vector>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N;
    std::vector<std::pair<int, int>> pairs;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        int A, B;
        std::cin >> A >> B;
        pairs.emplace_back(A, B);
    }

    for (const auto& pair : pairs)
    {
        auto result = pair.first + pair.second;
        std::cout << result << '\n';
    }

    return 0;
}