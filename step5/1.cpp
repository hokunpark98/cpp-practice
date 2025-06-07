#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string S;
    int i;

    std::cin >> S >> i;
    bool isAplhaOnly = true;
    for(char c : S)
    {
        if(!std::isalpha(static_cast<char>(c))){
            isAplhaOnly = false;
            break;
        }
    }
    if(isAplhaOnly && i<=S.size() && S.size() <=1000)
    {
        std::cout << S[i-1] << '\n';
    }
    return 0;
}