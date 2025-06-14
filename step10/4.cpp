#include <iostream>
#include <vector>
#include <utility>
#include <string>

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

    
    std::string str = "";    
    for (const auto& pair : pairs)
    {
        str += std::to_string(pair.first + pair.second) + '\n';
    }
    std::cout << str << '\n';

    return 0;
}