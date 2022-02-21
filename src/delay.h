//
// Created by 11518 on 2022/2/21.
//

#ifndef ZGQTOOL_DELAY_H
#define ZGQTOOL_DELAY_H

#include <iostream>
#include <stdlib.h>

namespace zgq {
    class Timer{
    public:
        inline void startClockMs()
        {
            m_StartTime = double(clock());
        }
        inline double endClockMs()
        {
            return double(clock())-m_StartTime;
        }
    private:
        double m_StartTime;
    };

    void delayMs(int ms = 1000); //time*1000为秒数
    void delayS(int s = 1);
};


#endif //ZGQTOOL_DELAY_H
