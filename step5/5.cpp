#include <iostream>
#include <string>

int solveProblem5(const std::string &s);

int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 100)
    {
        std::string s(N, '\0');

        for (int i = 0; i < N; i++)
        {
            std::cin >> s[i];
        }
        int result = solveProblem5(s);
        std::cout << result << '\n';
    }

    return 0;
}

int solveProblem5(const std::string &s)
{
    int result = 0;
    for (char c : s)
    {
        result += static_cast<int>(c - '0');
    }
    return result;
     
}