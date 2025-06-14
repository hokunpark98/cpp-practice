#include <iostream>
#include <vector>
#include <tuple>

std::tuple<int, int, int, int> returnMinMAXValue(std::vector<std::pair<int, int>> &inputs, int N);

int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 100'000)
    {
        std::vector<std::pair<int, int>> inputs;
        inputs.reserve(N);

        for (int i = 0; i < N; i++)
        {
            int A, B;
            std::cin >> A >> B;
            if (A >= -10'000 && A <= 10'000 && B >= -10'000 && B <= 10'000)
                inputs.emplace_back(A, B);
            else
                return 0;
        }

        auto [minX, minY, maxX, maxY] = returnMinMAXValue(inputs, N);
        int result = (maxX - minX) * (maxY - minY);

        std::cout << result << '\n';
    }

    return 0;
}

std::tuple<int, int, int, int> returnMinMAXValue(std::vector<std::pair<int, int>> &inputs, int N)
{
    int minX = inputs[0].first;
    int minY = inputs[0].second;
    int maxX = inputs[0].first;
    int maxY = inputs[0].second;

    for (int i = 1; i < N; i++)
    {
        if (inputs[i].first < minX)
            minX = inputs[i].first;
        if (inputs[i].second < minY)
            minY = inputs[i].second;
        if (inputs[i].first > maxX)
            maxX = inputs[i].first;
        if (inputs[i].second > maxY)
            maxY = inputs[i].second;
    }

    //std::cout << minX << ' ' << minY << ' ' << maxX << ' ' << maxY << '\n';

    return std::make_tuple(minX, minY, maxX, maxY);
}