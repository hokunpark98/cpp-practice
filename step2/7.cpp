#include <iostream>
#include <array>
#include <algorithm>
#include <map>

int main()
{
    int result = 0;
    std::array<int, 3> dice;
    std::cin >> dice[0] >> dice[1] >> dice[2];

    std::map<int, int> counts;
    for (int d : dice)
    {
        counts[d]++;
    }

    int maxCount = 1;
    int maxValue = 1;
    for (const auto &[value, count] : counts)
    {
        if (count > maxCount)
        {
            maxCount = count;
            maxValue = value;
        }
        else if(count == maxCount && value > maxValue)
        {
            maxValue = value;
        }
    }

    if (maxCount == 3)
    {
        result = 10000 + (maxValue * 1000);
    }
    else if (maxCount == 2)
    {
        result = 1000 + (maxValue * 100);
    }
    else if (maxCount == 1)
    {
        result = maxValue * 100;
    }

    std::cout << result << std::endl;

    return 0;
}