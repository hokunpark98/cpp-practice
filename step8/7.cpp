#include <iostream>

int main()
{
    int A, B, V;
    std::cin >> A >> B >> V;

    bool is_valid = (B >= 1 && B < A && B < V && B < 1'000'000'000 && A >= 1 && A > B && A <= V && A <= 1'000'000'000 &&
                     V > 1 && V > B && V >= A && V <= 1'000'000'000);

    if (is_valid)
    {
        int remain = V;
        int result = 1;

        remain -= A;
        if (remain != 0){
            result += remain / (A-B);
            if(remain % (A-B) != 0)
                result += 1;
        }

        std::cout << result << '\n';
    }

    return 0;
}