#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    bool isValidInputN = (N >= 1 && N<=1000000);

    if(isValidInputN)
    {
        std::vector<int> arr(N);
        for(int i=0; i<N; i++)
        {
            int v;
            std::cin >> v;
            bool isValidInputV = (v >=-1000000 && v <= 1000000);
            if(!isValidInputV)
                return 1;
            arr[i] = v;
        }

        auto max = std::max_element(arr.begin(), arr.end());
        auto min = std::min_element(arr.begin(), arr.end());

        std::cout << *min << " " << *max << "\n";
    }

    return 0;
}