// Copyright (c) 2023 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Dec 6, 2023
// This program will calculate the average of
// 10 nums

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>

int main() {
    // Declare userNumStr
    std::string userGuessStr;

    // create a random seed value
    std::random_device rd;
    // create the sequence for number generator
    std::mt19937 gen(rd());

    // Constants should be declared before they are used
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 1;
    const int MAX_NUM = 100;

    // create array and sum = 0
    int arrayOfInt[MAX_ARRAY_SIZE], randomNum;
    double sum = 0, average;

    // Create a distribution between 1 and 100
    std::uniform_int_distribution<int> distribution(MIN_NUM, MAX_NUM);

    // Generate random numbers and fill the array
    for (int counter1 = 0; counter1 < MAX_ARRAY_SIZE; counter1++) {
        // generate random num
        randomNum = distribution(gen);
        // set array to randomNum
        arrayOfInt[counter1] = randomNum;

        // display array
        std::cout << arrayOfInt[counter1] << " added to array" << std::endl;
    }

    // to get sum
    for (int counter2 = 0; counter2 < MAX_ARRAY_SIZE; counter2++) {
        sum += arrayOfInt[counter2];
    }

    // Calculate and display the average
    average = sum / MAX_ARRAY_SIZE;
    // display average
    std::cout << "\nThe average of all the numbers is "
    << std::fixed << std::setprecision(2) << average << std::endl;
}
