//
// Created by 11518 on 2022/2/21.
//

#include "delay.h"

void zgq::delayMs(int ms)
{
    clock_t now = clock();
    while(clock()-now < ms);
}

void zgq::delayS(int s) {
    time_t start_time, cur_time;
    time(&start_time);
    do
    {
        time(&cur_time);
    } while((cur_time - start_time) < s);
}
