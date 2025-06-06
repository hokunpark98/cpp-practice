#include <iostream>
#include <vector>
#include <algorithm>

int solveProblem(std::vector<int> &arr, int N, int M);
void printResult(std::vector<int> &arr);
int main()
{
    int N, M;
    std::cin >> N >> M;
    bool is_vaild_value = (N >= 1 && N <= 100 && M >= 1 && M <= 100);

    if (is_vaild_value)
    {
        std::vector<int> arr(N);

        for (int i = 0; i < N; i++)
        {
            arr[i] = i + 1;
        }

        int err = solveProblem(arr, N, M);
        if (err != 0)
            return 1;
        printResult(arr);
    }
    return 0;
}

int solveProblem(std::vector<int> &arr, int N, int M)
{
    for (int alpha = 0; alpha < M; alpha++)
    {
        int i, j;
        std::cin >> i >> j;
        bool is_valid_value = (i >= 1 && i <= j && i <= N && j >= 1 && j <= N);
        if (is_valid_value)
        {
            std::reverse(arr.begin() + i-1, arr.begin() + j);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void printResult(std::vector<int> &arr)
{
    for (int alpha = 0; alpha < arr.size(); alpha++)
    {
        std::cout << arr[alpha];

        if (alpha == arr.size() - 1)
        {
            std::cout << '\n';
        }
        else
        {
            std::cout << ' ';
        }
    }
}