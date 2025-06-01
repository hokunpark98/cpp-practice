// 첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다

#include <iostream>
#include <iomanip>
#include <cctype>
#include <algorithm> 


bool checkIsAllLower(std::string inputData)
{
    bool isAllLower = true;

    for (char c : inputData)
    {
        if (!std::islower(c))
        {
            isAllLower = false;
            break;
        }
    }
    return isAllLower;
}

int main()
{
    std::vector<std::string> ids;
    ids.push_back("joonas");
    ids.push_back("baekjoon");
    
    std::string inputData;
    

    std::cin >> inputData;
    
    if (inputData.size() <= 50 && checkIsAllLower(inputData))
    {
        if(std::find(ids.begin(), ids.end(), inputData) != ids.end()){
            std::cout << inputData + "??!" << std::endl;
        }
    }

    return 0;
}