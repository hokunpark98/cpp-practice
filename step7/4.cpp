#include <iostream>
#include <vector>
#include <utility>

bool checkConditions(int A, bool x_or_y);
int solveStep7Problem4(std::vector<std::pair<int, int>> &inputs, int N);
void makeRectancgle(std::vector<std::vector<bool>> &paper, int x, int y);
int rectangle_width = 10, rectangle_height = 10, paper_width = 100, paper_heght = 100;

int main()
{
    int N;

    std::cin >> N;

    if (N <= 100)
    {
        std::vector<std::pair<int, int>> inputs(N);
        for (int i = 0; i < N; i++)
        {
            int first, second;
            std::cin >> first >> second;

            if (!(checkConditions(first, 0) && checkConditions(second, 1))){
                return 1;
            }
                

            inputs[i].first = first;
            inputs[i].second = second;
        }

        int result = solveStep7Problem4(inputs, N);
        std::cout << result << '\n';
    }
}

bool checkConditions(int A, bool x_or_y) // x=0, y=1
{
    if (A > 0)
    {
        if ((!x_or_y) && A + rectangle_width > paper_width)
        { // x
            return false;
        }
        else if ((x_or_y) && A + rectangle_height > paper_heght)
        { // y
            return false;
        }
        return true;
    }
    else
        return false;
}

int solveStep7Problem4(std::vector<std::pair<int, int>> &inputs, int N)
{
    std::vector<std::vector<bool>> paper(paper_heght, std::vector<bool>(paper_width, false));
    int min_x = 1000, min_y = 1000;

    for (int i = 0; i < N; i++)
    {
        if (inputs[i].first < min_x)
        {
            min_x = inputs[i].first;
        }
        if (inputs[i].second < min_y)
        {
            min_y = inputs[i].second;
        }
    }

    for (int i = 0; i < N; i++)
    {
        int x = inputs[i].first - min_x;
        int y = inputs[i].second - min_y;
        makeRectancgle(paper, x, y);
    }

    int result = 0;
    for (int i = 0; i < paper_width; i++)
    {
        for (int j = 0; j < paper_heght; j++)
        {
            if (paper[i][j] == true)
                result++;
        }
    }

    return result;
}

void makeRectancgle(std::vector<std::vector<bool>> &paper, int x, int y)
{
    for (int i = x; i < x + rectangle_width; i++)
    {
        for (int j = y; j < y + rectangle_height; j++)
        {
            paper[i][j] = true;
        }
    }
}