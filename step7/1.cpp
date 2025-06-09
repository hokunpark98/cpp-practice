#include <iostream>
#include <vector>

int metrixInput(std::vector<std::vector<int>> &metrix, int M, int N);
void metrixSum(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &R, int M, int N);

int main()
{
    int M, N;
    std::cin >> M >> N;
    if (M > 0 && M <= 100 && N > 0 && N <= 100)
    {
        std::vector<std::vector<int>> A(M, std::vector<int>(N));
        std::vector<std::vector<int>> B(M, std::vector<int>(N));
        std::vector<std::vector<int>> R(M, std::vector<int>(N));

        int a_valid, b_valid;
        a_valid = metrixInput(A, M, N);
        b_valid = metrixInput(B, M, N);

        if (a_valid != 1 && b_valid != 1)
        {
            metrixSum(A, B, R, M, N);

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    std::cout << R[i][j];
                    if (j != N - 1)
                        std::cout << ' ';
                }
                std::cout << '\n';
            }
        }
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
            if (std::abs(v) <= 100)
                metrix[i][j] = v;
            else
                return 1;
        }
    }
    return 0;
}

void metrixSum(std::vector<std::vector<int>> &A, std::vector<std::vector<int>> &B, std::vector<std::vector<int>> &R, int M, int N)
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}