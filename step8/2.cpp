#include <iostream>
#include <stack>

void transform10toB(std::stack<char> &result, int N, int B);
char changeIntToChar(int A);

int main()
{
    int N, B;

    std::cin >> N >> B;
    if (B >= 2 && B <= 36 && N > 0 && N <= 1'000'000'000)
    {
        std::stack<char> stack;
        std::string result;
        transform10toB(stack, N, B);
        while (!stack.empty())
        {
            result += stack.top();
            //std::cout << "result: " << result << '\n';
            stack.pop();
        }
        std::cout << result << '\n';
    }
}

void transform10toB(std::stack<char> &stack, int N, int B)
{
    int temp1 = N; // 몫
    int temp2;     // 나머지
    char temp3;    // 저장할 값

    while (temp1 >= B)
    {
        temp2 = temp1 % B;
        temp1 = temp1 / B;
        
        //std::cout << temp1 << '\n';

        temp3 = changeIntToChar(temp2);

        stack.push(temp3);
    }
    temp3 = changeIntToChar(temp1);
    stack.push(temp3);
}

char changeIntToChar(int A)
{
    char result;
    if (A >= 10)
    {
        result = A - 10 + 'A';
    }
    else
    {
        result = A + '0';
    }
    return result;
}