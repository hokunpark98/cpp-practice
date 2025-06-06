#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

void solveProblem(std::vector<int> &inputArr, std::unordered_map<int, int> &resultMap, int V);
void printResult(std::unordered_map<int, int> resultMap);
int main()
{
    int N = 10, V = 42;
    std::vector<int> inputArr(N);
    std::unordered_map<int, int> resultMap;
    for (int i = 0; i < N; i++)
    {

        std::cin >> inputArr[i];
        if (inputArr[i] < 0 && inputArr[i] > 1000)
            return 1;
    }

    solveProblem(inputArr, resultMap, V);
    printResult(resultMap);

    return 0;
}

void solveProblem(std::vector<int> &inputArr, std::unordered_map<int, int> &resultMap, int V)
{
    for (const auto &a : inputArr)
    {
        int temp = a % V;
        resultMap[temp]++;
    }
}

void printResult(std::unordered_map<int, int> resultMap)
{
    std::cout << resultMap.size() << '\n';
}