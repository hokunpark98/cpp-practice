#include <iostream>

int solveProblemStep9(int num);

int main()
{
    int A, B;
    std::cin >> A >> B;

    if (A >= 100 && A < 1000 && B >= 100 && B < 1000)
    {
        int reverse_A, reverse_B;
        reverse_A = solveProblemStep9(A);
        reverse_B = solveProblemStep9(B);

        if(reverse_A >= reverse_B)
            std::cout << reverse_A << '\n';
        else    
            std::cout << reverse_B << '\n';
    }

    return 0;
}

int solveProblemStep9(int num)
{
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}