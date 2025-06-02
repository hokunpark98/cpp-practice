#include <iostream>
#include <vector>

int main()
{
    int T;

    std::cin >> T;

    std::vector<int> arr(T);

    for (int i = 0; i < T; i++)
    {
        int A, B, result;
        std::cin >> A >> B;
        arr[i] = A+B;
    }

    for(int result : arr){
        std::cout << result << std::endl;
    }

    return 0;
}
