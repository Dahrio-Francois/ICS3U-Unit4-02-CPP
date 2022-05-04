// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Dahrio Francois
// Created on: April 2022
// This program demonstrates a do while loop

#include <iostream>

int main() {
    // this function uses a do and while loop
    int positiveInteger;
    int loopCounter = 0;

    // input
    std::cout << "Enter how many times to repeat: ";
    std::cin >> positiveInteger;

    // process & output
    do {
        std::cout << loopCounter <<" time(s) through loop." << std::endl;
        loopCounter = loopCounter + 1;
    } while (loopCounter <= positiveInteger);
}
