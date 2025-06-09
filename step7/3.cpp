#include <iostream>
#include <vector>
#include <string>

bool makeMatrix(std::vector<std::vector<char>> &matrix, std::string input);
std::string solveStep7Problem3(std::vector<std::vector<char>> &matrix);
void printMatrix(std::vector<std::vector<char>> matrix);

int main()
{
    int N = 5;
    std::vector<std::vector<char>> matrix;

    for (int i = 0; i < N; i++)
    {
        std::string input;
        std::cin >> input;

        if (!makeMatrix(matrix, input))
            return 1;
    }

    //printMatrix(matrix);

    std::string result;
    result = solveStep7Problem3(matrix);
    std::cout << result << '\n';

    return 0;
}

bool makeMatrix(std::vector<std::vector<char>> &matrix, std::string s)
{
    std::vector<char> temp;
    for (char c : s)
    {
        if (!(std::isalpha(c) || std::isdigit(c)))
        {
            return false;
        }

        temp.emplace_back(c);
    }

    if (temp.size() < 1 || temp.size() > 15)
        return false;

    matrix.emplace_back(temp);
    return true;
}

std::string solveStep7Problem3(std::vector<std::vector<char>> &matrix)
{

    std::string result = "";
    size_t max_col = 0;

    for (std::vector<char> temp : matrix)
    {
        if (temp.size() > max_col)
        {
            max_col = temp.size();
        }
    }

    for (size_t i = 0; i < max_col; i++)
    {
        for (size_t j = 0; j < matrix.size(); j++)
        {
            if (matrix[j].size() > i)
                result += matrix[j][i];
        }
    }

    return result;
}

void printMatrix(std::vector<std::vector<char>> matrix)
{
    for (auto s : matrix)
    {
        for (auto c : s)
        {
            std::cout << c << ' ';
        }
        std::cout << '\n';
    }
}