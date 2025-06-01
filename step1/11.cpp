// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>
#include <iomanip>

int main()
{
    long long A, B, C;
    
    std::cin >> A >> B >> C;

    if (A >= 1 && A <= 1000000000000LL &&
        B >= 1 && B <= 1000000000000LL &&
        C >= 1 && C <= 1000000000000LL)
    {
        std::cout << A + B + C << std::endl;
    }

    return 0;
}