// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: December 2019
// this function finds the hexadecimals of a word

#include <iostream>
#include <string>
#include <list>
#include <map>
#include <sstream>

std::list<std::string> convert(std::string word) {
    // this function finds the hexadecimals of a word

    std::list<std::string> converted;
    std::map<std::string, std::string> hexadecimal = {
        {"a", "61"},
        {"b", "62"},
        {"c", "63"},
        {"d", "64"},
        {"e", "65"},
        {"f", "66"},
        {"g", "67"},
        {"h", "68"},
        {"i", "69"},
        {"j", "6a"},
        {"k", "6b"},
        {"l", "6c"},
        {"m", "6d"},
        {"n", "6e"},
        {"o", "6f"},
        {"p", "70"},
        {"q", "71"},
        {"r", "72"},
        {"s", "73"},
        {"t", "74"},
        {"u", "75"},
        {"v", "76"},
        {"w", "77"},
        {"x", "78"},
        {"y", "79"},
        {"z", "7a"},
    };

    // process
    for (std::string counter : word) {
        if (hexadecimal.count(counter) > 0) {
            converted.push_back(counter);
        } else {
            std::cout << "Not in the dictionary. Try again." << std::endl; }
    }

    return converted;
}


int main() {
    // this function shows the hexadecimal
    std::string word;
    std::list<std::string> converted;

    // input
    std::cout << "Enter a word: ";
    std::cin >> word;
    std::cout << "" << std::endl;

    // process
    converted = convert(word);

    // output
    for (std::string counter : converted) {
        std::cout << counter << " ";
    }
}