#include <iostream>
#include <vector>

int main()
{
    std::vector<int> default_chess_pieces = {1, 1, 2, 2, 2, 8};
    std::vector<int> result(6);

    for (int i = 0; i < default_chess_pieces.size(); i++)
    {
        int temp;
        std::cin >> temp;
        if (temp < 0 && temp > 10)
            return 1;
        else
        {
            result[i] = default_chess_pieces[i] - temp;
        }
    }

    for(int i=0; i<default_chess_pieces.size(); i++)
    {
        if(i == default_chess_pieces.size() - 1)
            std::cout << result[i] << '\n';
        else
            std::cout << result[i] << ' ';
    }


    return 0;
}