#include <iostream>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A > 0 && A < 180 && B > 0 && B < 180 && C > 0 && C < 180)
    {
        if (A + B + C == 180)
        {
            if (A == B && A == C && B == C)
            {
                std::cout << "Equilateral\n";
            }
            else if ((A == B) || (B == C) || (A == C))
            {
                std::cout << "Isosceles\n";
            }
            else
            {
                std::cout << "Scalene\n";
            }
        }
        else
        {
            std::cout << "Error\n";
        }
    }

    return 0;
}