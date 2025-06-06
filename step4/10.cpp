#include <iostream>
#include <vector>
#include <algorithm>

void solveProblem(std::vector<int> &scores);

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> scores(N);
    bool is_valid_value_N = (N <= 1000);
    if (is_valid_value_N)
    {
        for (int i = 0; i < N; i++)
        {
            int score;
            std::cin >> score;
            bool is_valid_range_score = (score >= 0 && score <= 100);
            if (is_valid_range_score)
            {
                scores[i] = score;
            }
            else
                return 1;
        }
        solveProblem(scores);
    }
    return 0;
}

void solveProblem(std::vector<int> &scores)
{
    auto max_it = std::max_element(scores.begin(), scores.end());
    int max_val = *max_it;
    double result = 0;

    for (const auto &score : scores)
    {
        result += static_cast<double>(score) / max_val * 100;
    }
    std::cout << result / scores.size() << '\n';
}
