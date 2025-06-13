#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    if (w >= 1 && w <= 1'000 && h >= 1 && h <= 1'000 && x >= 1 && x <= w - 1 && y >= 1 && y <= h - 1)
    {
        int temp1 = x, temp2 = y;
        int temp3 = w-x, temp4 = h-y;

        std::vector<int> candidates;
        candidates.emplace_back(temp1);
        candidates.emplace_back(temp2);
        candidates.emplace_back(temp3);
        candidates.emplace_back(temp4);

        auto min_it = std::min_element(candidates.begin(), candidates.end());
        
        std::cout << *min_it << '\n';
    }
}