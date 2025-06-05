#include <iostream>
#include <vector>
#include <algorithm>

void solveProblem(std::vector<int>& arr, int N, int M);
void printResult(std::vector<int>& arr);

int main()
{
    int N, M;
    std::cin >> N >> M;

    bool is_valid_value = (N >= 1 && N <= 100 && M >= 1 && M <= 100);
    if (is_valid_value)
    {
        std::vector<int> arr(N); 
        for(int alpha=0; alpha<N; alpha++)
        {
            arr[alpha] = alpha + 1;
        }
        solveProblem(arr, N, M);
        printResult(arr);
    }

    return 0;
}

void solveProblem(std::vector<int>& arr, int N, int M)
{
    for (int alpha = 0; alpha < M; alpha++)
    {
        int i, j;
        std::cin >> i >> j;
        bool is_valid_value = (i >= 1 && i <= N && j >=1 && j <= N);
        i -= 1;
        j -= 1;
        if (is_valid_value)
        {
            std::swap(arr[i], arr[j]);
        }
    }
}

void printResult(std::vector<int>& arr)
{
    for (int alpha = 0; alpha < arr.size(); alpha++)
    {
        if (alpha == arr.size() - 1)
            std::cout << arr[alpha] << "\n";
        else
            std::cout << arr[alpha] << " ";
    }
}