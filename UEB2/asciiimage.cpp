//
// Created by tfellner on 20.03.19.
//
#include "asciiimage.h"
#include <string>
#include <iostream>

myAscii::myAscii(int width, int height) {
    this->width = width;
    this->height = height;
    pic = new char *[width];

    for (int x = 0; x < width; ++x) {
        pic[x] = new char[height];
        for (int y = 0; y < height; ++y) {
            pic[x][y] = ' ';
        }
    }
}

myAscii::~myAscii() {
    for (int y = 0; y < this->width; ++y) {
        delete [] this->pic[y];
    }
    delete [] this->pic;
}

void myAscii::setPix(int x, int y, int color) {
    std::string const alphabet = R"( .'`^",:;Il!i><~+_-?][}{l)(|\/tfjrxnuvczXYUJCLQ0SZmwqpdbkhoa*#MW&8%B@$)";

    color = color <= 0 ? 0 : color >= (int)alphabet.length() - 1 ? (int)alphabet.length() - 1 : color;
    char code = alphabet[color];
    this->pic[x][y] = code;
}

void myAscii::show() {
    for (int y = 0; y < this->height; ++y) {
        for (int x = 0; x < this->width; ++x) {
            std::cout << pic[x][y];
        }
        std::cout << std::endl;
    }
}