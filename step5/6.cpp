#include <iostream>
#include <string>
#include <vector>

void solveProblem6(const std::string &s, std::vector<int> arr);
bool checkAllAlphaLower(const std::string &s);

int main()
{
    std::string s;
    std::cin >> s;
    if (s.size() <= 100 && checkAllAlphaLower(s))
    {
        int arr_size = 'z' - 'a' + 1;
        std::vector<int> arr(arr_size, -1);
        solveProblem6(s, arr);
    }

    return 0;
}

void solveProblem6(const std::string &s, std::vector<int> arr)
{
    for (int i = 0; i < s.size(); i++)
    {
        int c_int = s[i] - 'a';
        if (arr[c_int] == -1)
        {
            arr[c_int] = i;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
            std::cout << arr[i] << '\n';
        else
            std::cout << arr[i] << ' ';
    }
}

bool checkAllAlphaLower(const std::string &s)
{
    for (char c : s)
    {
        if (!std::islower(c))
        {
            return false;
        }
    }
    return true;
}