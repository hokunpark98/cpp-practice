#include <iostream>
#include <string>
#include <cctype>

bool checkAllAlpha(std::string &S);

int main()
{
    std::string S;
    std::cin >> S;
    if (checkAllAlpha(S) && S.size() <= 100)
    {
        std::cout << S.size() << '\n';
    }
    return 0;
}

bool checkAllAlpha(std::string &S)
{
    bool isAllAlpha = true;
    for (char c : S)
    {
        if (!std::isalpha(static_cast<char>(c)))
        {
            isAllAlpha = false;
            break;
        }
    }
    return isAllAlpha;
}