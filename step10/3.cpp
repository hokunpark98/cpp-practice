#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::pair<int, int>> inputs;
    inputs.reserve(3);

    for (int i = 0; i < 3; i++)
    {
        int A, B;
        std::cin >> A >> B;

        if (A >= 1 && A <= 1'000 && B >= 1 && B <= 1'000)
            inputs.emplace_back(A, B);
        else
            return 0;
    }

    int rX, rY;

    if(inputs[0].first == inputs[1].first)
    {
        rX = inputs[2].first;
    }
    else if(inputs[1].first == inputs[2].first)
    {
        rX = inputs[0].first;
    }
    else if(inputs[0].first == inputs[2].first)
    {
        rX = inputs[1].first;
    }



    if(inputs[0].second == inputs[1].second)
    {
        rY = inputs[2].second;
    }
    else if(inputs[1].second == inputs[2].second)
    {
        rY = inputs[0].second;
    }
    else if(inputs[0].second == inputs[2].second)
    {
        rY = inputs[1].second;
    }


    std::cout << rX << ' ' << rY << '\n';

    return 0;
}