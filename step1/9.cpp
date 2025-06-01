//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>
#include <iomanip> 

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A>=2 && A<=10000 && B>=2 && B<=10000 && C>=2 && C<=10000){
        std::cout << (A+B)%C << std::endl;
        std::cout << ((A%C) + (B%C))%C << std::endl;
        std::cout << (A*B)%C << std::endl;
        std::cout << ((A%C) * (B%C))%C << std::endl;
    }

    return 0;
}