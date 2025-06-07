#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    if (s.size() <= 1000000)
    {   int result = 0;
        int remove_count = 0;
        if (s[0] == ' ')
            remove_count++;

        if (s[s.size() - 1] == ' ')
            remove_count++;

        result = std::count(s.begin(), s.end(), ' ') - remove_count + 1;
        std::cout << result << '\n';
    }

    return 0;
}