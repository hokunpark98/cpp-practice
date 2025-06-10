#include <iostream>
#include <map>
#include <utility>
#include <vector>

int CENT = 100;
using Coinmap = std::map<char, std::pair<int, int>>;
std::vector<char> coins = {'Q', 'D', 'N', 'P'};
void solveStep8problem3(Coinmap &coinmap,int c);

int main()
{
    int T;
    std::cin >> T;

    std::vector<int> C(T);

    Coinmap default_coinmap{
        {'Q', {0.25 * CENT, 0}},
        {'D', {0.10 * CENT, 0}},
        {'N', {0.05 * CENT, 0}},
        {'P', {0.01 * CENT, 0}}};

    std::vector<Coinmap> coinmaps(T, default_coinmap);

    for (int i = 0; i < T; i++)
    {
        std::cin >> C[i];
        if (C[i] >= 1 && C[i] <= 500)
        {
            continue;
        }
        else
        {
            return 0;
        }
    }

    for (size_t i = 0; i < T; i++)
    {
        solveStep8problem3(coinmaps[i], C[i]);
    }

    for (size_t i = 0; i < T; i++)
    {
        for(size_t j=0; j< default_coinmap.size(); j++)
        {
            std::cout << coinmaps[i][coins[j]].second << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}

void solveStep8problem3(Coinmap &coinmap, int c)
{
    int temp = c;
    int i = 0;
    

    while (temp > 0)
    {
        int check;
        check = temp / coinmap[coins[i]].first;

        if (check > 0)
        {
            coinmap[coins[i]].second = check;
            temp -= check * coinmap[coins[i]].first;
            i++;
        }
        else
        {
            i++;
        }
    }
}