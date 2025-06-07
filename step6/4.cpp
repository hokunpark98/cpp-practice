#include <iostream>
#include <string>
#include <algorithm>

bool checkAllAlphaIsLower(std::string &s);
bool step6Problem4(std::string &s);

int main()
{
    std::string s;
    std::cin >> s;

    if (checkAllAlphaIsLower(s) && (s.size() >=1 && s.size() <=100))
    {
        if (step6Problem4(s))
        {
            std::cout << 1 << '\n';
        }
        else
        {
            std::cout << 0 << '\n';
        }
    }

    return 0;
}

bool checkAllAlphaIsLower(std::string &s)
{
    for (char c : s)
    {
        if (!std::islower(c))
            return false;
    }
    return true;
}

bool step6Problem4(std::string &s)
{
    std::string reverse_s = s;
    std::reverse(reverse_s.begin(), reverse_s.end());

    if(s == reverse_s)
        return true;
    else
        return false;
}