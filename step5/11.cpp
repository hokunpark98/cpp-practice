#include <iostream>
#include <vector>
#include <string>

bool checkConditions(std::string s);

int main()
{
    std::vector<std::string> S;
    std::string s;
    while (std::getline(std::cin, s))
    {
        if (s.empty())
            break;
        S.emplace_back(s);
    }

    for (std::string temp : S)
    {
        std::cout << temp << '\n';
    }
    return 0;
}

bool checkConditions(std::string s)
{
    if (s.size() > 100)
        return false;

    if (s[0] == ' ' || s[s.size() - 1] == ' ')
        return false;

    if (s.empty())
        return false;

    for (char c : s)
    {
        if (std::isupper(c) || std::islower(c) || c == ' ' || std::isdigit(c))
            continue;
        else
            return false;
    }
    return true;
}