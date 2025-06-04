#include <iostream>
#include <sstream>
#include <vector>
#include <utility>
#include <string>

int main()
{
    std::string line, lines;

    while (std::getline(std::cin, line))
    {
        if (line.empty())
        {
            break;
        }
        lines += line + ' ';
    }

    int A, B;
    std::vector<std::pair<int, int>> pairs;
    std::stringstream ss(lines);

    while (ss >> A >> B)
    {
        pairs.emplace_back(A, B);
    }

    for (const auto &[first, second] : pairs)
    {
        std::cout << first + second << '\n';
    }

    return 0;
}