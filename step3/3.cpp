#include <iostream>
#include <vector>

int main()
{
    int N;
    int result = 0;

    std::cin >> N;
    for(int i=0; i<=N; i++)
    {
        result += i;    
    }

    std::cout << result << std::endl;
    return 0;
}
