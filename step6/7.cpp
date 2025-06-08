#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int solveStep6Problem7(std::string &S);
bool checkStringRule(std::string &S);

int main()
{
    int N;
    std::cin >> N;

    if (N > 0 && N <= 100)
    {
        std::vector<std::string> S(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> S[i];
            if (!checkStringRule(S[i]))
                return 1;
        }

        int result = 0;

        for (std::string s : S)
            result += solveStep6Problem7(s);

        std::cout << result << '\n';
    }

    return 0;
}

bool checkStringRule(std::string &s)
{
    if (s.size() > 100)
        return false;

    for (char c : s)
    {
        if (!std::islower(c))
            return false;
    }
    return true;
}

int solveStep6Problem7(std::string &s)
{
    std::unordered_set<char> is_alpha_already_used;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            is_alpha_already_used.emplace(s[i]);
        }
        else
        {
            if(is_alpha_already_used.count(s[i])){
                if((s[i] != s[i-1]))
                    return 0;
            }
            else
                is_alpha_already_used.emplace(s[i]);
        }
    }
    return 1;
}