#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    if (N >= 1 && N <= 1'000'000'000)
    {
        int start = 1;
        int temp=start, i = 0;

        do
        {
            temp = temp + 6*i;
            i++;

        }while(temp < N);

        std::cout << i << '\n';
    }

    return 0;
}