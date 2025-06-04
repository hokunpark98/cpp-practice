#include <iostream>
#include <vector>
#include <utility>

int main()
{
    int N;
    std::vector<std::pair<int, int>> pairs;

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        int A, B;
        std::cin >> A >> B;
        pairs.emplace_back(A, B);
    }

    int idx = 1;
    for (const auto& pair : pairs)
    {
        auto result = pair.first + pair.second;
        std::cout << "Case #" << idx++ << ": " << pair.first << " + " << pair.second << " = " << result << '\n';
    }

    return 0;
}