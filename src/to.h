//
// Created by 11518 on 2022/2/21.
//

#ifndef ZGQTOOL_TO_H
#define ZGQTOOL_TO_H

#include <string>
#include <iostream>

namespace zgq{
    int stdStringToInt(std::string data="",int system = 10);
    int chrToInt(char *data,int system = 10);

    std::string intToStdString(int data);
    std::string doubleToStdString(double data);
    std::string floatToStdString(float data);

}




#endif //ZGQTOOL_TO_H
