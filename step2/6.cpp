#include <iostream>

int main()
{
    int hour, minuate, duration;

    std::cin >> hour >> minuate >> duration;

    if (hour >= 0 && hour <= 23 &&
        minuate >= 0 && minuate <= 59 &&
        duration >= 0 && duration <= 1000)
    {
        int hourOverflowCount = 0;
        int minuateOverFlowCount = 0;
        
        hourOverflowCount += (minuate + duration) / 60;
        minuate = (minuate + duration) % 60;

        if(hourOverflowCount > 0){
            hour += hourOverflowCount;
            if (hour >= 24){
                hour -= 24;
            }
        }

        std::cout << hour << " " << minuate << std::endl;
    }

    return 0;
}