#include <iostream>

int main()
{
    int N, K;
    std::cin >> N >> K;

    if (N >= 1 && N <= 10'000 && K >= 1 && K <= N)
    {
        int count = 0, result = 0;
        for (int i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                count++;
            }
            if (count == K)
            {
                result = i;
                break;
            }
        }

        std::cout << result << '\n';
    }

    return 0;
}