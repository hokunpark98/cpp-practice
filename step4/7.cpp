#include <iostream>
#include <vector>
#include <algorithm>

int solveProblem(std::vector<bool> &arr, int N, int M);
void printResult(std::vector<bool> &arr);

int main()
{
    int N = 30, M = 28;
    std::vector<bool> arr(N, false);
    int err = solveProblem(arr, N, M);
    if (err != 0)
        return 1;

    printResult(arr);

    return 0;
}

int solveProblem(std::vector<bool> &arr, int N, int M)
{
    for (int i = 0; i < M; i++)
    {
        int n;
        std::cin >> n;
        bool is_valid_value = (n >= 1 && n <= N);

        if (is_valid_value)
        {
            if (arr[n - 1] == false)
                arr[n - 1] = true;
            else
                return 1;
        }

        else
            return 2;
    }

    return 0;
}

void printResult(std::vector<bool> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == false)
            std::cout << i + 1 << "\n";
    }
}