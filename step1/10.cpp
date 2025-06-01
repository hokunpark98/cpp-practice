//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>
#include <iomanip> 

int main() {
    int A, B;
    int result = 0;
    int temp;

    std::cin >> A >> B;

    temp = B % 10;
    B -= temp;
    result += A*temp;
    std::cout << A*temp << std::endl;

    temp = (B) % 100;
    result += A*temp;
    B -= temp;
    std::cout << A*(temp/10) << std::endl;

    temp = (B) / 100;
    result += A*temp*100;
    std::cout << A*temp << std::endl;

    std::cout << result << std::endl;

    return 0;
}