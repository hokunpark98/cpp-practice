#include <iostream>
#include <iomanip> 

int main() {
    int A, B;
    double result;
    std::cin >> A >> B;

    if (A > 0 && A < 10 && B > 0 && B < 10) {
        result = static_cast<double>(A) / B;
        std::cout << std::fixed << std::setprecision(10) << result << std::endl;
    }

    return 0;
}