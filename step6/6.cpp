#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int solveStep6Problem6(std::string &S);
bool checkStringRule(std::string &S);

int main()
{
    std::string S;
    std::cin >> S;

    if (S.size() <= 100 && checkStringRule(S))
    {
        int result = solveStep6Problem6(S);
        std::cout << result << '\n';
    }

    return 0;
}

bool checkStringRule(std::string &S)
{
    for (char c : S)
    {
        if (std::islower(c) || c == '-' || c == '=')
            continue;
        else
            return false;
    }
    return true;
}

int solveStep6Problem6(std::string &S)
{
    std::unordered_set<std::string> croatia_alpha = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    for (int i = 0; i < S.size(); i++)
    {
        if (i < S.size() - 1)
        {
            std::string temp = "";
            for (int j = i; j < S.size(); j++)
            {
                temp += S[j];
                //std::cout << "temp: " << temp << '\n';
                if (croatia_alpha.count(temp)){
                    i = j;
                    //std::cout << "found\n";
                    break;
                }
            }
            count++;
        }
        else
            count++;
    }
    return count;
}