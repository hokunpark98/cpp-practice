#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n >= 1 && n <= 1'000'000'000)
    {
        long long result = static_cast<long long>(n) * 4;
        std::cout << result << '\n';
    }

    return 0;
}