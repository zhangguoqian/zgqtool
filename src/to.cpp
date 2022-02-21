//
// Created by 11518 on 2022/2/21.
//

#include "to.h"

namespace zgq{
    int stdStringToInt(std::string data,int system)
    {
        int i_dec = 0;
        std::string::size_type size;
        i_dec = std::stoi(data, &size, system);
        return i_dec;
    }

    int chrToInt(char *data, int system) {
        return stdStringToInt(data,system);
    }

    std::string zgq::intToStdString(int data) {
        return std::to_string(data);
    }

    std::string doubleToStdString(double data) {
        return std::to_string(data);
    }

    std::string floatToStdString(float data) {
        return std::to_string(data);
    }
}