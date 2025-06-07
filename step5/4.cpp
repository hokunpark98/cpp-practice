#include <iostream>

bool checkAllAlphaOrNum(const char c);

int main()
{
    char c;
    std::cin >> c;
    if (checkAllAlphaOrNum(c))
    {
        std::cout << static_cast<int>(c) << '\n';
    }
    return 0;
}

bool checkAllAlphaOrNum(const char c)
{
    int c_int = static_cast<int>(c - '0');
    if (std::isalpha(c) || (c_int >= 0 && c_int <= 9))
    {
        return true;
    }
    else
        return false;
}