//
// Created by Thomas on 3/4/2019.
//

#ifndef POSTFIXCALCULATOR_POSTFIX_H
#define POSTFIXCALCULATOR_POSTFIX_H

#include <iostream>
#include <string>
#include <cctype>
#include "MyCoolStack.h"

int getResult(std::istream& stream);
MyCoolStack<int> *splitString(std::string strToSplit, char delimiter);
bool isNumber(const std::string& s);

#endif //POSTFIXCALCULATOR_POSTFIX_H

