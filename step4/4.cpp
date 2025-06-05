#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N = 9;
    std::vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> arr[i];
    }

    auto max_it = std::max_element(arr.begin(), arr.end());
    int max_index = std::distance(arr.begin(), max_it) + 1;
    std::cout << *max_it << "\n"
              << max_index << "\n";

    return 0;
}