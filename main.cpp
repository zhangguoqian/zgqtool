//
// Created by 11518 on 2022/2/21.
//


#include "src/zgq.h"

int main()
{
    std::cout<< zgq::chrToInt("0a",16)<<std::endl;
    std::cout<< zgq::floatToStdString(1.5)<<std::endl;
    zgqTimer timer;
    timer.startClockMs();
    zgq::delayMs(5);
    std::cout<< timer.endClockMs();
    return 0;
}
