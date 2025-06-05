#include <iostream>
#include <vector>

int main()
{
    int N;

    std::cin >> N;
    if (N >= 1 && N <= 100)
    {
        std::vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> arr[i];
        }

        int v, result = 0;

        std::cin >> v;

        if (v >= -100 && v <= 100)
        {
            for (const auto &i : arr)
            {
                if (i == v)
                    result++;
            }
            std::cout << result << "\n";
        }
    }
}