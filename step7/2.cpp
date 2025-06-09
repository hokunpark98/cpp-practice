#include <iostream>
#include <vector>
#include <tuple>

int metrixInput(std::vector<std::vector<int>> &metrix, int M, int N);
std::tuple<int, int, int> findMaxValue(std::vector<std::vector<int>> &metrix, int M, int N);

int main()
{
    int M = 9, N = 9;
    std::vector<std::vector<int>> metrix(M, std::vector<int>(N));

    if (!metrixInput(metrix, M, N))
    {
        auto [max_val, max_row, max_col] = findMaxValue(metrix, M, N);
        std::cout << max_val << '\n';
        std::cout << max_row << ' ' << max_col << '\n';
    }
}

int metrixInput(std::vector<std::vector<int>> &metrix, int M, int N)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int v;
            std::cin >> v;
            if (std::abs(v) < 100 && std::abs(v) >= 0)
                metrix[i][j] = v;
            else
                return 1;
        }
    }
    return 0;
}

std::tuple<int, int, int> findMaxValue(std::vector<std::vector<int>> &metrix, int M, int N)
{
    int max_val=-1, max_row, max_col;
    for (int row = 0; row < M; row++)
    {
        for (int col = 0; col < N; col++)
        {
            if(metrix[row][col] > max_val)
            {
                max_val = metrix[row][col];
                max_row = row+1;
                max_col = col+1;
            }
        }
    }
    return std::make_tuple(max_val, max_row, max_col);
}