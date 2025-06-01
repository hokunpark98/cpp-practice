#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;

    if (A > 0 && A < 10 && B > 0 && B < 10) {
        std::cout << A + B << std::endl;
    }

    return 0;
}