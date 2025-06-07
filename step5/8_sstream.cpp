#include <iostream>
#include <string>
#include <sstream>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    if (s.size() <= 1000000)
    {
        std::istringstream iss(s);

        int count = 0;
        std::string word;
        while (iss >> word)
            count++;
        
        std::cout << count << '\n';
    }

    return 0;
}