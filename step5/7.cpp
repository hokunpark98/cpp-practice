#include <iostream>
#include <string>
#include <vector>

bool checkAlphaCondition(const std::string &S, int R);

int main()
{
    int T;
    std::cin >> T;
    if (T >= 1 && T <= 1000)
    {

        std::vector<std::pair<int, std::string>> M;
        for (int i = 0; i < T; i++)
        {
            int R;
            std::string S;
            std::cin >> R >> S;
            if (!checkAlphaCondition(S, R))
               return 1;

            M.emplace_back(R, S);
        }

        for (const auto &[R, S] : M)
        {
            for (char c : S)
            {
                for (int i = 0; i < R; i++)
                {
                    std::cout << c;
                }
            }

            std::cout << '\n';
        }
    }

    return 0;
}

bool checkAlphaCondition(const std::string &S, int R)
{
    std::string charset = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-./:";
    for (char c : S)
    {
        if (charset.find(c) == std::string::npos)
        {
            return false;
        }
    }

    if(R<1 && R>8)
        return false;
    
    if(S.size() < 1 && S.size() > 20)
        return false;

    return true;
}