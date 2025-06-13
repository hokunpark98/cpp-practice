#include <iostream>

int main()
{
    int A, B;
    std::cin >> A >> B;

    if (A >= 1 && A <= 100 && B >= 1 && B <= 100)
    {
        std::cout << A * B << '\n';
    }

    return 0;
}