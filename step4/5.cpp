#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solveProblem(int N, int M);
void printResult(std::vector<int> arr);

int main()
{
    int N, M;
    std::cin >> N >> M;

    bool is_valid_value = (N >= 1 && N <= 100 && M >= 1 && M <= 100);
    if (is_valid_value)
    {
        std::vector<int> arr = solveProblem(N, M);
        printResult(arr);
    }

    return 0;
}

std::vector<int> solveProblem(int N, int M)
{
    std::vector<int> arr(N);
    for (int alpha = 0; alpha < M; alpha++)
    {
        int i, j, k;
        std::cin >> i >> j >> k;
        bool is_valid_value = (i >= 1 && i <= N && j >= 1 && j <= N && i <= j && k >= 1 && k <= N);
        i -= 1;
        j -= 1;
        if (is_valid_value)
        {
            for (int beta = i; beta <= j; beta++)
            {
                arr[beta] = k;
            }
        }
    }
    return arr;
}

void printResult(std::vector<int> arr)
{
    for (int alpha = 0; alpha < arr.size(); alpha++)
    {
        if (alpha == arr.size() - 1)
            std::cout << arr[alpha] << "\n";
        else
            std::cout << arr[alpha] << " ";
    }
}