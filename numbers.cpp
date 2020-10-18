// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on October 2020
// This program states all integers from 1000 to 2000

#include <iostream>

main() {
    // This function states all integers from 1000 to 2000
    int counter;

    // Process & Output
    std::cout << "Here are all integers from 1000 to 2000:" << std::endl;
    std::cout << "" << std::endl;

    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 == 0) {
            if (counter == 2000) {
                std::cout << "2000" << std::endl;
            } else {
                std::cout << counter << " " << counter + 1  << " " <<
                counter + 2 << " " << counter + 3 << " " <<
                counter + 4 << std::endl;
            }
        }
    }
}
