#include <iostream>
#include <map>
#include <string>

int solveProblemStep10(std::string s, std::map<char, int> dial);
bool checkAllAlphaUpper(std::string s);

int main()
{
    std::string s;
    std::cin >> s;
    if (checkAllAlphaUpper(s) && (s.size() >= 2 && s.size() <= 15))
    {
        std::map<char, int> dial = {
            {'A', 2}, {'B', 2}, {'C', 2}, {'D', 3}, {'E', 3}, {'F', 3}, {'G', 4}, {'H', 4}, {'I', 4}, {'J', 5}, {'K', 5}, {'L', 5}, {'M', 6}, {'N', 6}, {'O', 6}, {'P', 7}, {'Q', 7}, {'R', 7}, {'S', 7}, {'T', 8}, {'U', 8}, {'V',8}, {'W', 9}, {'X', 9}, {'Y', 9}, {'Z', 9}};

        int time = solveProblemStep10(s, dial);
        std::cout << time << '\n';
    }

    return 0;
}

int solveProblemStep10(std::string s, std::map<char, int> dial)
{
    int time = 0;
    for (char c : s)
    {
        if (dial[c] == 0)
            time += 10;

        time += dial[c] + 1;
    }
    return time;
}

bool checkAllAlphaUpper(std::string s)
{
    for (char c : s)
    {
        if (!std::isupper(c))
            return false;
    }
    return true;
}