//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>
#include <iomanip> 

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A > 0 && A < 10000 && B > 0 && B < 10000) {
        std::cout << A + B << std::endl;
        std::cout << A - B << std::endl;
        std::cout << A * B << std::endl;
        std::cout << A / B << std::endl;
        std::cout << A % B << std::endl;
    }

    return 0;
}