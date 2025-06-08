#include <iostream>
#include <string>
#include <map>
#include <vector>

bool checkAllAlpha(std::string& S);
std::string changeUpper(std::string& S);
void solveStep6Problem5(std::string& S);

int main()
{
    std::string S;
    std::cin >> S;

    if(checkAllAlpha(S) && S.size() <=1000000)
    {
        std::string all_upper_S;
        all_upper_S = changeUpper(S);
        solveStep6Problem5(all_upper_S);

    }
    return 0;
}

bool checkAllAlpha(std::string& S)
{
    for (char c : S)
    {
        if(!std::isalpha(c))
            return false;
    }
    return true;
}

std::string changeUpper(std::string& S)
{
    for(int i=0; i<S.size(); i++)
    {
        if(std::islower(S[i]))
            S[i] = std::toupper(S[i]);
    }
    return S;
}

void solveStep6Problem5(std::string& S)
{
    std::map<char, int> result_map;
    for(char c : S)
    {
        result_map[c]++;
    }

    /*
    for(auto [alpha, count] : result_map)
    {
        std::cout << alpha << ' ' << count << '\n';
    }
    */

    int max_count=0;

    for(const auto& [alpha, count] : result_map)
    {
        if(count > max_count)
            max_count = count;
    }

    std::vector<char> result;

    for(const auto& [alpha, count] : result_map)
    {
        if(max_count == count)
            result.emplace_back(alpha);
    }


    if(result.size() > 1)
        std::cout << '?' << '\n';
    else
    {
        std::cout << result[0] << '\n';
    }
}