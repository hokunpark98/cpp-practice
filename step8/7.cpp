#include <iostream>

int main()
{
    int A, B, V;
    std::cin >> A >> B >> V;

    bool is_valid = (B >= 1 && B < A && B < V && B < 1'000'000'000 && A >= 1 && A > B && A <= V && A <= 1'000'000'000 &&
                     V > 1 && V > B && V >= A && V <= 1'000'000'000);

    if (is_valid)
    {
        int day = V / (A - B);
        int remain = V % (A - B);

        if (remain != 0)
        {
            day++;
        }

        remain = remain - A + B;

        if(remain <= A)
            day--;

        std::cout << day << '\n';
    }

    return 0;
}