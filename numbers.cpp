// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on May 2022
// The level to percentage

#include <iostream>
#include <string>

int percentage(std::string level) {
    // this function converts a level to percentage
    int percentageNumber;

    // process
    if (level == "4+") {
        percentageNumber = 97;
    } else if (level == "4") {
        percentageNumber = 91;
    } else if (level == "4-") {
        percentageNumber = 83;
    } else if (level == "3+") {
        percentageNumber = 78;
    } else if (level == "3") {
        percentageNumber = 75;
    } else if (level == "3-") {
        percentageNumber = 71;
    } else if (level == "2+") {
        percentageNumber = 68;
    } else if (level == "2") {
        percentageNumber = 65;
    } else if (level == "2-") {
        percentageNumber = 61;
    } else if (level == "1+") {
        percentageNumber = 58;
    } else if (level == "1") {
        percentageNumber = 55;
    } else if (level == "1-") {
        percentageNumber = 51;
    } else if (level == "R") {
        percentageNumber = 30;
    } else {
        percentageNumber = -1;
    }

    return percentageNumber;
}

int main() {
    // this function gets input, calls a function, gives output
    std::string level;
    int percentageNumber;

    // input
    std::cout << "Enter level: ";
    std::cin >> level;

    percentageNumber = percentage(level);

    if (percentageNumber == -1) {
        std::cout << "Invalid level." << std::endl;
    } else {
        std::cout << "Level " << level << " is also "
        << percentageNumber << "%." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
