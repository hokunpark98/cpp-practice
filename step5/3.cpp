#include <iostream>
#include <string>
#include <cctype>
#include <vector>

bool checkAllUppercase(std::string &s);

int main()
{
    int T;
    std::cin >> T;

    if (T >= 1 && T <= 10)
    {
        std::vector<std::string> S(T);

        for(int i=0; i<T; i++)
        {
            std::cin >> S[i];
            if(!checkAllUppercase(S[i]))
                return 1;
        }
        for(std::string s : S)
        {
            std::cout << s[0] << s[s.size()-1] << '\n';

        }
    }

    return 0;
}

bool checkAllUppercase(std::string &s)
{
    for (char c : s)
    {
        if (!std::isupper(static_cast<char>(c)))
        {
            return false;
        }
    }
    return true;
}
