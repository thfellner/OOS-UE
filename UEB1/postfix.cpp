//
// Created by Thomas on 3/4/2019.
//

#include "postfix.h"

int getResult(std::istream& stream) {
    std::string inputString;
    std::getline (stream, inputString);
    MyCoolStack<int> *numbers = splitString(inputString, ' ');
    int result = numbers->pop();
    delete numbers;

    return result;
}

MyCoolStack<int> *splitString(std::string strToSplit, char delimiter) {
    auto *numberStack = new MyCoolStack<int>();

    size_t pos = 0;

    std::string token;
    int result = 0;
    int exitFlag = 0;

    while ((pos = strToSplit.find(delimiter)) != std::string::npos || !strToSplit.empty()) {
        if (pos == std::string::npos) {
            token = strToSplit;
        } else {
            token = strToSplit.substr(0, pos);
        }

        if (isNumber(token)) {
            numberStack->push(std::stoi(token));
        } else {
            switch (token[0]) {
                case '+':
                    result = numberStack->pop() + numberStack->pop();
                    numberStack->push(result);
                    break;
                case '-':
                    {
                        int var2 = numberStack->pop();
                        result = numberStack->pop() - var2;
                        numberStack->push(result);
                    }
                    break;
                case '*':
                    result = numberStack->pop() * numberStack->pop();
                    numberStack->push(result);
                    break;
                case '/':
                    {
                        int var2 = numberStack->pop();
                        result = numberStack->pop() / var2;
                        numberStack->push(result);
                    }
                    break;
                case '%':
                    {
                        int var2 = numberStack->pop();
                        result = numberStack->pop() % var2;
                        numberStack->push(result);
                    }
                    break;
                case '=':
                    // goto is another option to leave the loop
                    exitFlag = 1;
                    break;
                default:
                    break;
            }

            if (exitFlag == 1) {
                break;
            }
        }

        if (token != strToSplit) {
            strToSplit.erase(0, pos + 1);
        }
    }

    if (exitFlag != 1) {
        std::cout << "Maybe you forgot the = sign?" << std::endl;
    }

    return numberStack;
}

bool isNumber(const std::string& s) {
    bool isNumber = true;
    for (char i : s) {
        isNumber = isNumber && std::isdigit(i);
    }
    return !s.empty() && isNumber;
}

