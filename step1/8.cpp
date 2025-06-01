// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>

int main()
{
    int inputYear;
    int calYear;

    std::cin >> inputYear;

    if(inputYear >= 1000 and inputYear <= 3000){
        calYear = inputYear - 543;
    }

    std::cout << calYear << std::endl;

    return 0;
}