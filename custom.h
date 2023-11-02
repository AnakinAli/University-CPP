//
// Created by anakin on 03.11.23.
//

#ifndef INC_3_11_CUSTOM_H
#define INC_3_11_CUSTOM_H

#include <iostream>
using namespace std;


template<typename T>
T getInput(const string& prompt) {
    T value;
    cout << prompt;
    cin >> value;
    cout << endl;
    return value;
}

#endif //INC_3_11_CUSTOM_H

